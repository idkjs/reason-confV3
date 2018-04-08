open Data;

let component = ReasonReact.statelessComponent("Footer");

module SocialIcons = Gatsby.SocialIcons;

module SocialIcon = Gatsby.SocialIcon;

[@bs.module] external style : Js.t({..}) = "./footer.module.scss";

module Link = Gatsby.Link;

let str = Utils.s;

/* create list of social icons */
let socialUrls = [|
  "https://www.twitter.com/reasonconf",
  "https://www.facebook.com/ReasonConf-1334078980027448/",
  "https://www.github.com/reasonvienna",
|];

let make = _children => {
  ...component,
  render: _self =>
    <footer className=style##root>
      <div className="container_centered grid">
        <Navigation pathName="/" navigationLocation=Footer />
        <nav className=style##additional>
          <ul>
            <li> <Link to_="/coc/"> "Code of Conduct" </Link> </li>
            <li> <a href="/contact/"> ("Contact Us" |> str) </a> </li>
            <li> <Link to_="/imprint/"> ("Imprint" |> str) </Link> </li>
          </ul>
        </nav>
        <nav className=style##social>
          <SocialIcons
            urls=socialUrls
            color="#8eaeb6"
            className=style##socialIcon
          />
        </nav>
        <section className=style##copyright>
          <p className=style##about>
            <a href="/about"> ("not-for-profit conference " |> str) </a>
            ("by developers for developers" |> str)
          </p>
          <p> ({j|© Atrium, 2018|j} |> str) </p>
        </section>
      </div>
    </footer>,
};

let default = Utils.wrapIt(~component, _jsProps => make([||]));
/* let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||])); */
