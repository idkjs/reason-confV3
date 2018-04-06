module Link = Gatsby.Link;

[@bs.module] external style : Js.t({..}) = "./SubscribeForm.module.scss";

let component = ReasonReact.statelessComponent("SubscribeForm");

let str = Utils.s;

let make = _children => {
  ...component,
  render: _self => {
    let formEl =
      <form name="newsletter" action="/speakers" className=style##root>
        <p className=style##text>
          (
            str(
              "Get Reason Conf news straight to your inbox. No spam, we promise!",
            )
          )
        </p>
        <div className=style##formRow>
          <label htmlFor="email" className=style##label>
            ("Email: " |> str)
          </label>
          <input
            _type="email"
            name="email"
            id="email"
            placeholder="name@domain.com"
            className=style##input
          />
          <Button _type="submit"> ("Subscribe" |> str) </Button>
        </div>
      </form>;
    ReasonReact.cloneElement(formEl, ~props={"data-netlify": true}, [||]);
  },
};
