[@bs.module] external style : Js.t({..}) = "./speakerCard.module.scss";

open Utils;

module ParallaxScroll = Gatsby.ParallaxScroll;

let component = ReasonReact.statelessComponent("SpeakerCard");

/* add ParallaxScroll as a wrapper to the whole element */
let make = (~speaker: Data.Speaker.t, _children) => {
  ...component,
  render: _self =>
    <ParallaxScroll
      from="top-bottom"
      to_="bottom-top"
      props={
        "--speaker-ty": {
          "from": "100px",
          "to": "-100px",
        },
      }>
      <figure className=style##root>
        <img src=speaker.imgUrl alt=speaker.name />
        <figcaption>
          <h3 className=style##name> (s(speaker.name)) </h3>
          <p> (s(speaker.company)) </p>
        </figcaption>
      </figure>
    </ParallaxScroll>,
};
