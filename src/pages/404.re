open Utils;

/* let component = "NotFoundPage" |> rrsc; */
let component = ReasonReact.statelessComponent("NotFoundPage");

let make = _children => {
  ...component,
  render: _self => <div> ("404 - NOT FOUND" |> s) </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));