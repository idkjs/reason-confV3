[@bs.module] external style : Js.t({..}) = "./button.module.scss";

let component = ReasonReact.statelessComponent("Button");

let s = Utils.s;

let make = (~text="", _children) => {
  ...component,
  render: _self => <div className=style##root> (s(text)) </div>,
};
