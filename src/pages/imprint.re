let component = ReasonReact.statelessComponent("Imprint");

let ste = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> ({j|Imprint|j} |> ste) </h1>
      <h2> (ste({j|Alain Armand|j})) </h2>
      <p> (ste("Vincennes, Paris, France")) </p>
      <p>
        <a href="mailto:aarmand.inbox@@gmail.com">
          (ste("aarmand.inbox@@gmail.com"))
        </a>
      </p>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
