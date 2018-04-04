let component = ReasonReact.statelessComponent("Footer");

[@bs.module] external style : Js.t({..}) = "./Footer.module.scss";

let str = Utils.s;

let organizerElWithPic = (organizer: Data.organizerData) =>
  <a href=organizer.href className=style##creator key=organizer.name>
    <img src=organizer.imgUrl alt=organizer.altText className=style##img />
    (str(organizer.name))
  </a>;

let make = _children => {
  ...component,
  render: _self =>
    <footer>
      <div className="container_centered grid grid-6col">
        <section className=style##about>
          <p>
            (
              "Reason Conf is the not-for-profit conference\norganized by community efforts by people\nbehind React Vienna community:"
              |> str
            )
          </p>
          (
            switch (Data.organizers) {
            | (x, y, z) =>
              <p>
                (
                  Array.map(organizerElWithPic, [|x, y|])
                  |> ReasonReact.arrayToElement
                )
                (str(" & "))
                (organizerElWithPic(z))
              </p>
            }
          )
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
        <section className=style##copyright>
          <Gatsby.Link to_="/imprint/"> ("Imprint" |> str) </Gatsby.Link>
          <p> ({j|© Atrium, 2018|j} |> str) </p>
        </section>
      </div>
    </footer>,
  /* create new div to apply container grid styles */
};

let default = Utils.wrapIt(~component, _jsProps => make([||]));
/* let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||])); */
