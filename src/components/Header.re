module Link = Gatsby.Link;

[@bs.module] external style : {. "header": string} = "./header.module.scss";

let component = ReasonReact.statelessComponent("Header");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <ul className=style##header>
      <li> <Link to_="/schedule/"> (s("Schedule")) </Link> </li>
      <li> <Link to_="/speakers/"> (s("speakers")) </Link> </li>
      <li> <Link to_="/sponsors/"> (s("sponsors")) </Link> </li>
      <li> <Link to_="/about/"> (s("about")) </Link> </li>
      <li> <Link to_="/blog/"> (s("blog")) </Link> </li>
    </ul>,
  /* <li><Button to_="/schedule/">(s("Schedule"))</Button></li> */
};
