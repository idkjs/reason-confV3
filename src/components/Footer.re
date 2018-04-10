open Utils;

let component = ReasonReact.statelessComponent("Footer");

module SocialIcons = Gatsby.SocialIcons;

module SocialIcon = Gatsby.SocialIcon;

[@bs.module] external style : Js.t({..}) = "./footer.module.scss";

module Link = Gatsby.Link;

/* create list of social icons */
let socialUrls = [|
  "https://www.twitter.com/reasonconf",
  "https://www.facebook.com/ReasonConf-1334078980027448/",
  "https://www.github.com/reasonvienna",
|];

let organizerWithPic = ({imgUrl, name, href}: Data.Organizer.t) =>
  <a href className=style##creator key=name>
    <img src=imgUrl alt={j|Photo of $(name)|j} className=style##userpic />
    (name |> s)
  </a>;

let make = _children => {
  ...component,
  render: _self =>
    <footer className=style##root>
      <div className="container_centered grid">
        <Navigation pathName="/" navigationLocation=Footer />
        <nav className=style##additional>
          <ul>
            <li> <Link to_="/coc/"> "Code of Conduct" </Link> </li>
            <li> <a href="/contact/"> ("Contact Us" |> s) </a> </li>
            <li> <Link to_="/imprint/"> ("Imprint" |> s) </Link> </li>
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
          (
            {j|
DemoConf is a [not-for-profit conference](/about/) event by developers for developers.

Design by [Andrey Okonetchnikov](http://okonet.ru) with additional tweaks by [Alain Armand](https://twitter/_idkjs)

© DemoConf 2018
            |j}
            |> md
          )
        </section>
      </div>
    </footer>,
};

let default = Utils.wrapIt(~component, _jsProps => make([||]));
/* let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||])); */
