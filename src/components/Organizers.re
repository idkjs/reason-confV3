open Data;

[@bs.module] external style : Js.t({..}) = "./organizers.module.scss";

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

let make = (~organizers: list(Data.organizerData), _children) => {
  ...component,
  render: _self =>
    <div className=style##root>
      (
        switch (organizers) {
        | [] => ReasonReact.nullElement
        | orgs =>
          Array.of_list(orgs)
          |> Array.map(organizerElWithPic)
          |> ReasonReact.arrayToElement
        }
      )
    </div>,
};
