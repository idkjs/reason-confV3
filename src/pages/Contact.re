module Link = Gatsby.Link;

let component = ReasonReact.statelessComponent("Contact");

let make = _children => {
  ...component,
  render: _self =>
    <section className="thanks grid grid-6col">
      <div className="thanks--grid">
        <h1> ("Contact us" |> Utils.s) </h1>
        <section className="thanks grid grid-6col">
          <div className="thanks--grid"> <ContactForm /> </div>
        </section>
      </div>
    </section>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
