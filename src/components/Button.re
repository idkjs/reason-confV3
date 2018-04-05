[@bs.module] external style : Js.t({..}) = "./button.module.scss";

let component = ReasonReact.statelessComponent("Button");

let s = Utils.s;

let make = (~_type, ~className, _children) => {
  ...component,
  render: _self => {
    let classNames = Cn.make([style##root, Some(className) |> Cn.ifOpt]);
    ReasonReact.createDomElement(
      "button",
      ~props={"type": _type, "className": classNames},
      children,
    );
  },
};
