module Link = Gatsby.Link;

let s = Utils.s;

[@bs.module] external style : Js.t({..}) = "./contactForm.module.scss";

let component = ReasonReact.statelessComponent("ContactForm");

let make = _children => {
  ...component,
  render: _self => {
    let formEl =
      <form
        name="contact" action="/thanks/" className=style##root method="post">
        <div className=style##formRow>
          <label htmlFor="name" className=style##label> (s("Name: ")) </label>
          <input
            _type="text"
            name="name"
            id="name"
            placeholder="Johnny Appleseed"
            className=style##input
            required=Js.true_
          />
        </div>
        <div className=style##formRow>
          <label htmlFor="email" className=style##label>
            ("Email: " |> s)
          </label>
          <input
            _type="email"
            name="email"
            id="email"
            placeholder="name@domain.com"
            className=style##input
            required=Js.true_
          />
        </div>
        <div className=style##formRow>
          <label htmlFor="message" className=style##label>
            ("Message: " |> s)
          </label>
          <textarea
            name="message"
            id="message"
            placeholder="message"
            className=style##textarea
            required=Js.true_
          />
        </div>
        <Button _type="submit" className=style##submit>
          ("Submit" |> s)
        </Button>
        <input _type="hidden" name="form-name" value="contact" />
      </form>;
    ReasonReact.cloneElement(
      formEl,
      ~props={"data-netlify": Js.true_},
      [||],
    );
  },
};
