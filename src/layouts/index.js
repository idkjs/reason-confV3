import "normalize.css";
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

export default TemplateWrapper;
