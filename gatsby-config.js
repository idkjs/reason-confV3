const autoprefixer = require("autoprefixer");
module.exports = {
  siteMetadata: {
    title: `Gatsby Demo Mandalarian`
  },
  plugins: [
    `gatsby-plugin-react-helmet`,
    {
      resolve: `gatsby-plugin-postcss-sass`,
      options: {
        postCssPlugins: [autoprefixer()]
      }
    },
    {
      resolve: `gatsby-plugin-google-analytics`,
      options: {
        trackingId: "",
        anonymize: true
      }
    }
  ]
};
