/* import "normalize.css";
   import React from "react";
   import Link from "gatsby-link";
   import Helmet from "react-helmet";
   import Footer from "../components/Footer";
   import "./index.scss";

   const TemplateWrapper = ({ children }) => (
     <article className="container">
       <Helmet
         title="Demo 2018"
         meta={[
           { name: "description", content: "Demo 2018" },
           { name: "keywords", content: "Gatsby, Conference, Reason, Reason Conf" }
         ]}
       >
         <style type="text/css">{`@import url('https://fonts.googleapis.com/css?family=Assistant|Hammersmith+One');`}</style>
         <script src="https://js.tito.io/v1" async />
       </Helmet>
       <main>{children()}</main>
       <Footer />
     </article>
   );

   export default TemplateWrapper; */
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

/* <style type="text/css">{`@import url('https://fonts.googleapis.com/css?family=Assistant|Hammersmith+One');`}</style>*/
let styleImport =
  Utils.s(
    "@import url('https://fonts.googleapis.com/css?family=Assistant|Hammersmith+One');",
  );

let make = children => {
  ...component,
  render: _self =>
    <article className="container">
      <Helmet title="Demo 2018" meta=metaData />
      <style _type="text/css"> styleImport </style>
      <main> (children()) </main>
      <Footer />
    </article>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
