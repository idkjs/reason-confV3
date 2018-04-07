open Data;

let component = ReasonReact.statelessComponent("Organizers");

let organizerElWithPic = ({imgUrl, name, href}: Data.organizerData) =>
  <a href key=name> <img src=imgUrl alt={j|Photo of $(name)|j} /> </a>;

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
