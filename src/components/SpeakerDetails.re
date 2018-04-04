[@bs.module] external style : Js.t({..}) = "./SpeakerDetails.module.scss";

open Utils;

open Data;

let s = Utils.s;

let component = ReasonReact.statelessComponent("SpeakerDetails");

let make = (~speaker: Data.speakerData, _children) => {
  ...component,
  render: _self =>
    <div className=style##root key=speaker.name>
      <img src=speaker.imgUrl />
      <div>
        <h2> (s(speaker.name)) </h2>
        <p> (s(speaker.description)) </p>
        (
          switch (speaker.talk) {
          | Some(t) => <p> ("Talk: " |> s) <a href=""> (t.title |> s) </a> </p>
          | None => ReasonReact.nullElement
          }
        )
      </div>
    </div>,
};
