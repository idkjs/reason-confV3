module Link = Gatsby.Link;

let s = Utils.s;

[@bs.module] external style : Js.t({..}) = "./ContactForm.module.scss";

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
          />
        </div>
        <div className=style##formRow>
          <label htmlFor="message" className=style##label>
            ("Message: " |> s)
          </label>
          <input
            _type="message"
            name="message"
            id="message"
            placeholder="name@domain.com"
            className=style##input
          />
          <Button _type="submit"> ("Subscribe" |> s) </Button>
        </div>
        <input _type="hidden" name="form-name" value="contact" />
      </form>;
    ReasonReact.cloneElement(formEl, ~props={"data-netlify": true}, [||]);
  },
};
