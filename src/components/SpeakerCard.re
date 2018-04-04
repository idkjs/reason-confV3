[@bs.module] external style : Js.t({..}) = "./SpeakerCard.module.scss";

let s = Utils.s;

let component = ReasonReact.statelessComponent("SpeakerCard");

let make = (~speaker: Data.speakerData, _children) => {
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
