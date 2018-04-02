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
    }
  ]
};
