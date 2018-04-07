/* call all scripts/modules that we had in index.js */
%raw
"require('normalize.css')";

%raw
"require('./index.scss')";

/* convert to using Helmut in Reason via Gatsby.re */
module Helmet = Gatsby.Helmet;

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
    /* check if on thanks page, if so dont render */
    let isThanksPage = location##pathname == "/thanks/";
    <article className="page">
      <Helmet title="Demo 2018" meta=metaData>
        /* get tito service css stylesheet */

          <script src="https://js.tito.io/v1" async=Js.true_ />
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
          <div className="container container_centered grid">
            <Navigation pathName=location##pathname />
            <main> (children()) </main>
          </div>;
        }
      )
      (
        Utils.componentOrNull(
          ! isThanksPage,
          <section className="subscribe">
            <div className="container_centered  grid grid-6col">
              <h2> ("Subscribe to Newsletter" |> Utils.s) </h2>
              <SubscribeForm />
            </div>
          </section>,
        )
      )
      <Footer />
    </article>;
  },
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~location=jsProps##location, jsProps##children)
  );
