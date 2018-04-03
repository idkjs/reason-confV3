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
    <article className="container">
      <Helmet title="Demo 2018" meta=metaData />
      (Utils.componentOrNull(! isHomepage, <Navigation />))
      <main> (children()) </main>
      <Footer />
    </article>;
  },
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~location=jsProps##location, jsProps##children)
  );
