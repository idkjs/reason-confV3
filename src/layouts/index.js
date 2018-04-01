import "normalize.css";
import React from "react";
import Link from "gatsby-link";
import Helmet from "react-helmet";
import Footer from "../components/Footer";
import "./index.css";

const TemplateWrapper = ({ children }) => (
  <article className="container">
    <Helmet
      title="Demo 2018"
      meta={[
        { name: "description", content: "Demo 2018" },
        { name: "keywords", content: "Gatsby, Conference, Reason, Reason Conf" }
      ]}
    />
    <main>{children()}</main>
    <Footer />
  </article>
);

export default TemplateWrapper;
