let component = ReasonReact.statelessComponent("Contact");

open Utils;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> ("Contact us" |> s) </h1>
      <section className="thanks grid grid-6col">
        <div className="thanks--grid"> <ContactForm /> </div>
      </section>
    </div>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
