let s = ReasonReact.stringToElement;

let wrapIt = ReasonReact.wrapReasonForJs;

let componentOrNull = (condition, component) =>
  if (condition) {component} else {ReasonReact.nullElement};
/*
 let componentOrNull = (condition, component) =>
   if (condition) {component} else {ReasonReact.nullElement};
 */
