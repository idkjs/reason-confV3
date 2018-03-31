/* at this point this component just renders "Imprint" text when called.
   I can see how we might put a logo or whatever here. A limited function
   component.
   */
let component = ReasonReact.statelessComponent("Imprint");

let make = _children => {
  ...component,
  render: _self => <div> <h1> ({j|Imprint|j} |> Utils.s) </h1> </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));