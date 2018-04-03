let component = ReasonReact.statelessComponent("Blog");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self => <h1> (s("Blog")) </h1>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
