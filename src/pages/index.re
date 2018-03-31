let component = ReasonReact.statelessComponent("CodeOfConduct");

let ste = ReasonReact.stringToElement;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> (ste("Hi People")) </h1>
      <Gatsby.Link to_="/coc/"> "Code of Conduct" </Gatsby.Link>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));