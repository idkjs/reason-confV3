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

### FigCaption Styles

Apply following style to figcaption nested in div with .speaker class.
Also, this div will show after img because of img's z-index. This leaves a space

```css
.speaker > figcaption {
  position: relative;
  top: -2rem;
  left: 20px;
  padding: 2rem 20px 20px 20px;
  background: #fff;
}
```

## Font Family Names in Quotes

see: https://stackoverflow.com/questions/13751412/why-would-font-names-need-quotes

This is ok. Only CSS generic fonts dont need quotes.

```css
body {
  font-family: "Assistant", sans-serif;
  font-size: 16pt;
}

/* apply following font to all following tags */
h1,
h2,
h3,
h4,
h5,
h6 {
  font-family: "Hammersmith One", Arial, sans-serif;
}
```

To use these fonts, import them where we are applying our css, in this case, in layouts/index.js.

```js
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
    </Helmet>
    <main>{children()}</main>
    <Footer />
  </article>
);
```

## Footer CSS

After applying column grid to Footer, you will get the 4 section/divs we have defined there spread across the defined grid columns, side by side, as expected. Have to define addition grid properties specific to Footer to get additional formatting. Below we are using [grid-area](https://developer.mozilla.org/en-US/docs/Web/CSS/grid-area), shorthand for grid's grid-row start, grid-column-start, grid-row-end and grid-column-end properties to specify size and location within the footer grid-row.

1.  define a name for the grid area.
2.  g-column handles gc-start and end so `1/ span 2` says start at column 1 and go for 2 columns to the class footer--about.
3.  For .copyright, put it at the end and make it take up the last two grid columns.

```css
footer {
  grid-area: footer;
  font-size: 0.9rem;
}

footer--about {
  grid-column: 1 / span 2;
}

.copyright {
  grid-column-end: span 2;
  text-align: right;
}
```

## container--centered

Add container--centered to all sections and now becomes a bit simpler to adjust all sections by playing with properties of that property. Adding padding and max-width 1000 seems to have helped look some but not yet responsive.

## grid-gap

The grid-gap CSS property is a shorthand property for grid-row-gap and grid-column-gap specifying the gutters between grid rows and columns.
[source](https://developer.mozilla.org/en-US/docs/Web/CSS/grid-gap)
`grid-gap: 20px;`

## grid template auto

`grid-template-row: 260px auto;`, where auto is being used as max-content property. So telling grid to automatically determine the max content given the size of first variable.
[source](https://www.quackit.com/css/css3/properties/css_grid-template-rows.cfm)
