[@bs.module] external style : Js.t({..}) = "./speakerCard.module.scss";

open Utils;

open Data;

let component = ReasonReact.statelessComponent("SpeakerCard");

let make = (~speaker: Speaker.t, _children) => {
  ...component,
  render: _self =>
    <figure className=style##root>
      <img src=speaker.imgUrl alt=speaker.name />
      <figcaption>
        <h3 className=style##name> (s(speaker.name)) </h3>
        <p> (s(speaker.company)) </p>
      </figcaption>
    </figure>,
};
/* let default =
   ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children)); */
