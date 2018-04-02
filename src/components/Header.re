module Link = Gatsby.Link;

[@bs.module] external style : {. "header": string} = "./header.module.scss";

let component = ReasonReact.statelessComponent("Header");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <ul className=style##header>
      <li> <Link to_="/schedule/"> (s("Schedule")) </Link> </li>
      <li> <Link to_="/speakers/"> (s("Speakers")) </Link> </li>
      <li> <Link to_="/sponsors/"> (s("Sponsors")) </Link> </li>
      <li> <Link to_="/about/"> (s("About")) </Link> </li>
      <li> <Link to_="/blog/"> (s("Blog")) </Link> </li>
    </ul>,
  /* <li><Button to_="/schedule/">(s("Schedule"))</Button></li> */
};
