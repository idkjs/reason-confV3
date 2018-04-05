module Link = Gatsby.Link;

[@bs.module] external style : Js.t({..}) = "./SubscribeForm.module.scss";

let component = ReasonReact.statelessComponent("SubscribeForm");

let str = Utils.s;

let make = _children => {
  ...component,
  render: _self => {
    let formEl =
      <form name="newsletter" className=style##root>
        <p>
          (
            str(
              "Get Reason Conf news straight to your inbox. No spam, we promise!",
            )
          )
        </p>
        <label htmlFor="email" className=style##label>
          ("Email: " |> str)
        </label>
        <div className=style##formRow>
          <input
            _type="email"
            id="email"
            placeholder="name@domain.com"
            className=style##input
          />
        </div>
        <Button _type="submit" className=style##button>
          ("Subscribe" |> str)
        </Button>
      </form>;
    ReasonReact.cloneElement(formEl, ~props={"data-netlify": true}, [||]);
  },
};
