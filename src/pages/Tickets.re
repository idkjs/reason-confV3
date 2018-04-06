module Link = Gatsby.Link;

let component = ReasonReact.statelessComponent("Tickets");

module Tickets = Tito.Tickets;

let make = _children => {
  ...component,
  render: _self =>
    <section className="tickets">
      <div className="container_centered">
        <h1> ("Tickets" |> Utils.s) </h1>
        <Tickets event="shing/demo-2018" />
      </div>
    </section>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
