[@bs.module] external style : Js.t({..}) = "./SpeakerCard.module.scss";

let s = Utils.s;

let component = ReasonReact.statelessComponent("SpeakerCard");

let s = Utils.s;

let make = (~speaker: Data.speakerData, _children) => {
  ...component,
  render: _self =>
    <figure className=style##root>
      <img src=speaker.imgUrl width="225" height="225" />
      <figcaption>
        <h3 className=style##name> (s(speaker.name)) </h3>
        <p> (s(speaker.company)) </p>
      </figcaption>
    </figure>,
};
/* let default =
   ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children)); */
