[@bs.module] external marked : (string, Js.t({..})) => string = "marked";

let s = ReasonReact.stringToElement;

let ate = ReasonReact.arrayToElement;

let soi = string_of_int;

let wrapIt = ReasonReact.wrapReasonForJs;

let componentOrNull = (condition, component) =>
  if (condition) {component} else {ReasonReact.nullElement};

let md = markdownString => {
  let res =
    marked(
      markdownString,
      {"gfm": Js.true_, "smartLists": Js.true_, "smartypants": Js.true_},
    );
  let props = ReactDOMRe.props(~dangerouslySetInnerHTML={"__html": res}, ());
  ReactDOMRe.createElement("div", ~props, [||]);
};
