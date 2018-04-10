open Data;

let component = ReasonReact.statelessComponent("Speakers");

let s = Utils.s;

let toSpeakerDetail = (speaker: Speaker.t) =>
  <SpeakerDetails speaker key=speaker.name />;

let make = _children => {
  ...component,
  render: _self =>
    <section>
      <h1> ("Speakers" |> s) </h1>
      <main className="full">
        (
          Speaker.speakers
          |> Array.map(toSpeakerDetail)
          |> ReasonReact.arrayToElement
        )
      </main>
    </section>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
