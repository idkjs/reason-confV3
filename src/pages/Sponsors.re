let component = ReasonReact.statelessComponent("Sponsors");

let s = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <section>
      <h1> (s("Sponsors")) </h1>
      <h2> (s("Why sponsoring")) </h2>
    </section>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
