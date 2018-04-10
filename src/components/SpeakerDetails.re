[@bs.module] external style : Js.t({..}) = "./speakerDetails.module.scss";

open Utils;

open Data;

let component = ReasonReact.statelessComponent("SpeakerDetails");

let make = (~speaker: Speaker.t, _children) => {
  ...component,
  render: _self =>
    <div className=style##root>
      <figure className=style##figure>
        <img src=speaker.imgUrl className=style##image />
      </figure>
      <section className=style##description>
        <h2 className=style##name> (s(speaker.name)) </h2>
        <p className=style##company> (s(speaker.company)) </p>
        <p> (s(speaker.description)) </p>
        (
          switch (speaker.talk) {
          | Some(t) => <p> ("Talk: " |> s) <a href=""> (t.title |> s) </a> </p>
          | None => ReasonReact.nullElement
          }
        )
      </section>
    </div>,
};
