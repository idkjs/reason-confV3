let component = ReasonReact.statelessComponent("CodeOfConduct");

let make = _children => {
  ...component,
  render: _self =>
    <div>
       <h1> ({j|Code of Conduct|j} |> Utils.s) </h1> </div>,
      /* <Gatsby.Link to_="/"> "[back]" </Gatsby.Link> */ /* example of passing an string with an array of text. works
    I think because reason is reading it as a property of a record. Gatsby.Link must
    be treating anything passed to it as a record?
    ! */ /* ({j|Return to HomePage|j} |> Utils.s) */
};

/* set up default with wrapForJs
   see: https://reasonml.github.io/reason-react/docs/en/interop.html#reactjs-using-reasonreact

   The function takes in the labeled reason component you've created, and a function that,
   given the JS props, asks you to call make while passing in the correctly converted
   parameters. You'd assign the whole thing to the name default.

   This allows Gatsby to use the file.
   */
let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));