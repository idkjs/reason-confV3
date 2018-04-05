module Link = Gatsby.Link;

[@bs.module] external style : Js.t({..}) = "./Navigation.module.scss";

open Utils;

let component = ReasonReact.statelessComponent("Navigation");

let s = Utils.s;

let activeClassName = "active";

let make = (~pathName, _children) => {
  ...component,
  render: _self => {
    let isHomePage = pathName == "/";
    let rootClassName = isHomePage ? style##root_home : style##root;
    <nav className=rootClassName>
      <ul className=style##list>
        <li className=style##linkHome>
          <Link to_="/" activeClassName> (s("Home")) </Link>
        </li>
        <li className=style##listItem>
          <Link to_="/schedule/" activeClassName> (s("Schedule")) </Link>
        </li>
        <li className=style##listItem>
          <Link to_="/speakers/" activeClassName> (s("Speakers")) </Link>
        </li>
        <li className=style##listItem>
          <Link to_="/sponsors/" activeClassName> (s("Sponsors")) </Link>
        </li>
        <li className=style##listItem>
          <Link to_="/about/" activeClassName> (s("About")) </Link>
        </li>
        <li className=style##listItem>
          <Link to_="/blog/" activeClassName> (s("Blog")) </Link>
        </li>
        <li>
          <a href="#tickets" className=style##ticketsButton>
            (s("Buy A Ticket"))
          </a>
        </li>
      </ul>
    </nav>;
    /* <li> <Button text="Buy A Ticket" /> </li> */
  },
};
