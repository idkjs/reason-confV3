module Link = Gatsby.Link;

[@bs.module] external style : Js.t({..}) = "./navigation.module.scss";

open Utils;

let component = ReasonReact.statelessComponent("Navigation");

let s = Utils.s;

type navigationLocation =
  | Header
  | Footer;

let make = (~pathName, ~navigationLocation=Header, _children) => {
  ...component,
  render: _self => {
    let isHomePage = pathName == "/";
    let rootClassName =
      switch (navigationLocation) {
      | Header => style##root_header
      | Footer => style##root_footer
      };
    /* we dont need the activeClassName in the footer so check for it */
    let activeClassName =
      navigationLocation == Header ? style##link_active : "";
    /* Use link style for tickets link in the footer */
    let ticketsClassName =
      navigationLocation == Header ? style##ticketsButton : "";
    <nav className=rootClassName>
      (
        componentOrNull(
          ! isHomePage,
          <Link to_="/" className=style##link_home>
            <img src=Assets.logo alt="Home" className=style##logo />
          </Link>,
        )
      )
      <ul className=style##list>
        /* <li className=style##listItem>
             <Link to_="/schedule/" className=style##link activeClassName>
               (s("Schedule"))
             </Link>
           </li> */

          <li className=style##listItem>
            <Link to_="/speakers/" className=style##link activeClassName>
              (s("Speakers"))
            </Link>
          </li>
          <li className=style##listItem>
            <Link to_="/about/" className=style##link activeClassName>
              (s("About"))
            </Link>
          </li>
          <li className=style##listItem>
            <Link to_="/sponsors/" className=style##link activeClassName>
              (s("Sponsors"))
            </Link>
          </li>
          <li className=style##listItemBuy>
            <a
              href="https://ti.to/shing/demo-2018"
              target="_blank"
              className=ticketsClassName>
              (s("Buy a ticket"))
            </a>
          </li>
        </ul>
    </nav>;
    /* <li className=style##listItemBuy>
         <Link to_="/tickets/" className=style##ticketsClassName>
           (s("Buy A Ticket"))
         </Link>
       </li> */
  },
};
