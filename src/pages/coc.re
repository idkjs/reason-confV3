let component = ReasonReact.statelessComponent("CodeOfConduct");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> (ReasonReact.stringToElement("Code of Conduct")) </h1>
      <Gatsby.Link destination="/">
        (ReasonReact.stringToElement("Go back to the homepage"))
      </Gatsby.Link>
    </div>,
};

let component = ReasonReact.statelessComponent("CodeOfConduct");

let make = _children => {
  ...component,
  render: _self =>
    /* <div>
         <h1> (ReasonReact.stringToElement("Code of Conduct")) </h1>
         <Gatsby.Link destination="/">
           (ReasonReact.stringToElement("Go back to the homepage"))
         </Gatsby.Link>
       </div>, */
    <div>
       <h1> ({j|Code of Conduct|j} |> Utils.s) </h1> </div>,
      /* <Gatsby.Link destination="/">
           ({j|Return to HomePage|j} |> Utils.s)
         </Gatsby.Link> */
};

/* set up default with wrapForJs
   see: https://reasonml.github.io/reason-react/docs/en/interop.html#reactjs-using-reasonreact

   The function takes in the labeled reason component you've created, and a function that,
   given the JS props, asks you to call make while passing in the correctly converted
   parameters. You'd assign the whole thing to the name default.

   This allows Gatsby to use the file.
   */
let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));