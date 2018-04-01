# gatsby based demo

## Develop

* run bucklescript
  `yarn re:start`

* run Gatsby
  `yarn start`

## Build

```sh
yarn re:build && yarn build
```

## Deploy

[![Deploy to Netlify](https://www.netlify.com/img/deploy/button.svg)](https://app.netlify.com/start/deploy?repository=https://github.com/gatsbyjs/gatsby-starter-default)

## React Helmut

* https://github.com/nfl/react-helmet
* Reusable React component that manages all of your changes to the document head. So whatever we put in there will be rendered to <header> tag. At this point, we are defining header in layout.index const Header.

## Lint Staged for linting files before commit

* see: https://github.com/okonet/lint-staged

- not running from vs-code, only terminal.

### Why

* from [docs](https://github.com/okonet/lint-staged#why)
  Linting makes more sense when running before committing your code. By doing that you can ensure no errors are going into repository and enforce code style. But running a lint process on a whole project is slow and linting results can be irrelevant. Ultimately you only want to lint files that will be committed.

## Nik's CSS Tips

1.  Write your tag names before writing the css then go write the css. Think ahead.
