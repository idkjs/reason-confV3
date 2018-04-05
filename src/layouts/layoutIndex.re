/* call all scripts/modules that we had in index.js */
%raw
"require('normalize.css')";

%raw
"require('./index.scss')";

/* convert to using Helmut in Reason via Gatsby.re */
module Helmet = Gatsby.Helmet;

module Tickets = Tito.Tickets;

/* reason version of templatewrapper component */
let component = ReasonReact.statelessComponent("TemplateWrapper");

/* define metaData, object array/list of objects so we can pass it to expected meta labeled arg in Helmet */
let metaData = [|
  {"name": "description", "content": "Demo Conf"},
  {"name": "keywords", "content": "Reason, Demo 2018, Conference, ReasonML"},
|];

let make = (~location, children) => {
  ...component,
  render: _self => {
    let isHomepage = location##pathname == "/";
    <article className="page">
      <Helmet title="Demo 2018" meta=metaData>
        /* get tito service css stylesheet */

          <link
            rel="stylesheet"
            _type="text/css"
            href="https://css.tito.io/v1.1"
          />
        </Helmet>
      (
        if (isHomepage) {
          <main> (children()) </main>;
        } else {
          <div className="container container_centered grid grid-6col">
            <Navigation pathName=location##pathname />
            <main> (children()) </main>
          </div>;
        }
      )
      <section className="tickets">
        <div className="container_centered">
          <h2 id="tickets"> ("Tickets" |> Utils.s) </h2>
          <Tickets event="shing/demo-2018" />
        </div>
      </section>
      <Footer />
    </article>;
  },
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~location=jsProps##location, jsProps##children)
  );
