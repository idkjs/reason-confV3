const autoprefixer = require("autoprefixer");
const { withPrefix } = require("gatsby-link");

module.exports = {
  siteMetadata: {
    title: "Gatsby Demo Mandalarian",
    siteUrl: "https://demo-conf.netlify.com",
    description: "Demo conference site for dev conference",
    image: withPrefix("/open-graph.jpg"),
    keywords: "Reason, ReasonML, Demo Conference, Vincennes, France"
  },
  plugins: [
    "gatsby-plugin-react-helmet",
    {
      resolve: "gatsby-plugin-postcss-sass",
      options: {
        postCssPlugins: [autoprefixer()]
      }
    },
    {
      resolve: "gatsby-plugin-google-analytics",
      options: {
        trackingId: "UA-117152316-1",
        anonymize: true
      }
    }
  ]
};
