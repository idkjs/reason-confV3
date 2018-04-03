let component = ReasonReact.statelessComponent("SpeakerCard");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self => <h1> (s("SpeakerCard")) </h1>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
