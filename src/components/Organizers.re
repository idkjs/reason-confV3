open Data;

[@bs.module] external style : Js.t({..}) = "./Organizers.module.scss";

let component = ReasonReact.statelessComponent("Organizers");

let organizerElWithPic = ({imgUrl, name, href}: Data.organizerData) =>
  <a href className=style##creator key=name>
    <img src=imgUrl alt={j|Photo of $(name)|j} className=style##userpic />
    (name |> Utils.s)
  </a>;

let make = (~organizers: list(Data.organizerData), _children) => {
  ...component,
  render: _self =>
    switch (organizers) {
    | [] => ReasonReact.nullElement
    | [o3, ...rest] =>
      <span>
        (
          Array.of_list(rest)
          |> Array.map(organizerElWithPic)
          |> ReasonReact.arrayToElement
        )
        (" & " |> Utils.s)
        (organizerElWithPic(o3))
      </span>
    },
};
