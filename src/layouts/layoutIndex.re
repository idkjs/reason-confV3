%raw
"require('normalize.css')";

%raw
"require('./index.scss')";

/* convert to using Helmut in Reason via Gatsby.re */
module Helmet = Gatsby.Helmet;

/* reason version of templatewrapper component */
let component = ReasonReact.statelessComponent("TemplateWrapper");

let title = "DemoConf 2018";

let make = (~location, children) => {
  ...component,
  render: _self => {
    let isHomepage = location##pathname == "/";
    /* check if on thanks page, if so dont render */
    let isThanksPage = location##pathname == "/thanks/";
    <div className="page">
      <Helmet title>
        <script src="https://js.tito.io/v1" async=Js.true_ />
        <link
          rel="stylesheet"
          _type="text/css"
          href="https://css.tito.io/v1.1"
        />
      </Helmet>
      /* get tito service css stylesheet */
      (
        if (isHomepage) {
          <main> (children()) </main>;
        } else {
          <div className="container container_centered">
            <header> <Navigation pathName=location##pathname /> </header>
            <article> (children()) </article>
          </div>;
        }
      )
      (
        Utils.componentOrNull(
          ! isThanksPage,
          <footer className="subscribe">
            <div className="container_centered grid grid-6col">
              <h2> ("Subscribe to Newsletter" |> Utils.s) </h2>
              <SubscribeForm />
            </div>
          </footer>,
        )
      )
      <Footer />
    </div>;
  },
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps =>
    make(~location=jsProps##location, jsProps##children)
  );
