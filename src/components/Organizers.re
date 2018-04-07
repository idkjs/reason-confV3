open Data;

[@bs.module] external style : Js.t({..}) = "./Organizers.module.scss";

let component = ReasonReact.statelessComponent("Organizers");

let organizerElWithPic = ({imgUrl, name, href, twitter}: Data.organizerData) =>
  <figure key=name className=style##organizer>
    <img src=imgUrl className=style##photo alt={j|Photo of $(name)|j} />
    <figcaption className=style##info>
      <p className=style##name> (name |> Utils.s) </p>
      <a href className=style##twitter>
        ("@" |> Utils.s)
        (twitter |> Utils.s)
      </a>
    </figcaption>
  </figure>;

let make = (~organizers: list(Data.organizerData), ~className, _children) => {
  ...component,
  render: _self =>
    <div className>
      (
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
        }
      )
    </div>,
};
