let component = ReasonReact.statelessComponent("Speakers");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self => <h1> (s("Speakers")) </h1>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
