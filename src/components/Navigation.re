module Link = Gatsby.Link;

[@bs.module] external style : Js.t({..}) = "./Navigation.module.scss";

let component = ReasonReact.statelessComponent("Navigation");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <nav className=style##navigation>
      <ul className=style##header>
        <li> <Link to_="/schedule/"> (s("Schedule")) </Link> </li>
        <li> <Link to_="/speakers/"> (s("Speakers")) </Link> </li>
        <li> <Link to_="/sponsors/"> (s("Sponsors")) </Link> </li>
        <li> <Link to_="/about/"> (s("About")) </Link> </li>
        <li> <Link to_="/blog/"> (s("Blog")) </Link> </li>
        <li> <Button text="Buy A Ticket" /> </li>
      </ul>
    </nav>,
};
