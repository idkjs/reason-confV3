module Tickets = {
  [@bs.module "./titowidget"]
  external titowidget : ReasonReact.reactClass = "Widget";
  let make = (~event: string, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=titowidget,
      ~props={"event": event},
      children,
    );
};
