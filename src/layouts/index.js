import "normalize.css";
import React from "react";
import Link from "gatsby-link";
import Helmet from "react-helmet";
import Footer from "../components/Footer";
import "./index.css";

const TemplateWrapper = ({ children }) => (
  <div>
    <Helmet
      title="Demo 2018"
      meta={[
        { name: "description", content: "Demo 2018" },
        { name: "keywords", content: "Gatsby, Conference, Reason, Reason Conf" }
      ]}
    />
    {children()}
    <Footer />
  </div>
);

export default TemplateWrapper;
