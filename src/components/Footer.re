open Data;

let component = ReasonReact.statelessComponent("Footer");

[@bs.module] external style : Js.t({..}) = "./Footer.module.scss";

module Link = Gatsby.Link;

let str = Utils.s;

/* let organizerElWithPic = ({imgUrl, name, href}: Data.organizerData) =>
   <a href className=style##creator key=name>
     <img src=imgUrl alt={j|Photo of $(name)|j} className=style##img />
     (str(name))
   </a>; */
let make = _children => {
  ...component,
  render: _self =>
    <footer className=style##root>
      <div className="container_centered grid grid-6col">
        /* <section className=style##subscribe> <SubscribeForm /> </section> */

          <Navigation pathName="/" navigationLocation=Footer />
          <nav className=style##additional>
            <ul>
              <li> <Link to_="/coc/"> "Code of Conduct" </Link> </li>
              <li>
                <a href="https://www.example.com"> ("Contact Us" |> str) </a>
              </li>
              <li> <Link to_="/imprint/"> ("Imprint" |> str) </Link> </li>
            </ul>
          </nav>
          <nav className=style##social>
            <ul>
              <li>
                <a href="https://www.twitter.com/reasonconf">
                  ("Twitter" |> str)
                </a>
              </li>
              <li>
                <a href="https://www.facebook.com"> ("Facebook" |> str) </a>
              </li>
              <li>
                <a href="https://www.github.com"> ("Github" |> str) </a>
              </li>
            </ul>
          </nav>
          <section className=style##copyright>
            <p className=style##about>
              (
                "Reason Conf is the not-for-profit conference organized by React Vienna organizers:"
                |> str
              )
              <Organizers organizers=Data.organizers />
            </p>
            <p> ({j|© Atrium, 2018|j} |> str) </p>
          </section>
        </div>
    </footer>,
};

let default = Utils.wrapIt(~component, _jsProps => make([||]));
/* let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||])); */
