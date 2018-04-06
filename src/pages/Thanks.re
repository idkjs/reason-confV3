module Link = Gatsby.Link;

let component = ReasonReact.statelessComponent("Thanks");

let make = _children => {
  ...component,
  render: _self =>
    <section className="thanks grid grid-6col">
      <div className="thanks--grid">
        <h1> ("Thank you for your interest" |> Utils.s) </h1>
        <p>
          (
            Utils.s(
              "Your data has been submitted. We will be in contact soon.",
            )
          )
        </p>
        <p> <Link to_="/"> ("Back to Home Page" |> Utils.s) </Link> </p>
      </div>
    </section>,
};

let default =
  ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
