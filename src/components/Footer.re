let component = ReasonReact.statelessComponent("Footer");

/* [@bs.module] external style : Js.t({..}) = "./Footer.module.css"; */
let str = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <footer>
      <div className="container_centered grid grid-6col">
        <section className="footer--about">
          <p>
            (
              "Reason Conf is the not-for-profit conference\norganized by community efforts by people\nbehind React Vienna community:"
              |> str
            )
          </p>
        </section>
        <nav>
          <ul>
            <li>
              <a href="https://www.example.com">
                ("Subscribe to newsletter" |> str)
              </a>
            </li>
            <li>
              <Gatsby.Link to_="/coc/"> "Code of Conduct" </Gatsby.Link>
            </li>
            <li>
              <a href="https://www.example.com"> ("Contact Us" |> str) </a>
            </li>
          </ul>
        </nav>
        <nav>
          <ul>
            <li>
              <a href="https://www.twitter.com/reasonconf">
                ("Twitter" |> str)
              </a>
            </li>
            <li>
              <a href="https://www.facebook.com"> ("Facebook" |> str) </a>
            </li>
            <li> <a href="https://www.github.com"> ("Github" |> str) </a> </li>
          </ul>
        </nav>
        <section className="copyright">
          <Gatsby.Link to_="/imprint/"> ("Imprint" |> str) </Gatsby.Link>
          <p> ({j|© Atrium, 2018|j} |> str) </p>
        </section>
      </div>
    </footer>,
  /* create new div to apply container grid styles */
};

let default = Utils.wrapIt(~component, _jsProps => make([||]));
/* let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||])); */
