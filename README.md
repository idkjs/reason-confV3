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

## speaker-list css

Just adding speaker-list without anything:

```css
.speaker-list {
  display: grid;
  grid-template-columns: repeat(4, 1fr);
  grid-gap: 20px;
  margin: 0;
  padding: 0;
}
```

Adding css for each item doesnt fix:

```css
.speaker-list--item {
  margin: 0;
  padding: 0;
  list-style: none;
}
```

Adding css for each speaker block with position: relative renders the four items with spacing that respects the size of speaker-list-list. Without this, takes alignment of everything on page outside the viewport.

```css
/* single speaker block */
.speaker {
  position: relative;
  margin: 0;
}
```

### Nested Tag Styles

In nested div, like our list of speakers,
use '>' to apply img style to descendants of the div in which we call it, so, if we call this in speaker, find img tag nested in .speaker and apply this style. https://stackoverflow.com/questions/4459821/css-selector-what-is-it

z-index: specify stack order of element, so within this div, always place the img div
before the other elements in div like name and company, in this case.

```css
.speaker > img {
  position: relative;
  z-index: 1;
}
```
