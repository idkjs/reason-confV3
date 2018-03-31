let component = ReasonReact.statelessComponent("Home");

let ste = ReasonReact.stringToElement;

let str = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <div className="teaser">
        /* this div gets 70% of div teaser */

          <div>
            <img src=Assets.logo width="507" height="132" />
            <div>
              (
                "World's first Reason conference for web-developers & OCaml enthusiasts"
                |> Utils.s
              )
            </div>
            <p>
              (
                "We believe Reason is the next big thing and we think it is time to bring the community together, learn about the language and talk about new innovations.\n"
                |> str
              )
            </p>
          </div>
          /* this second div gets 30% of div teaser */
          <div>
            <div> ("11-13 May 2018" |> Utils.s) </div>
            <div> ("Vienna, Austria" |> Utils.s) </div>
          </div>
        </div>
      <h2> ("Get productive with Reason in 3 days" |> str) </h2>
      <div>
        <div> (ste("Day 1")) </div>
        <h3> ("Get started" |> str) </h3>
        <div>
          (
            "Full day workshop to get every attendee into the language & platform."
            |> str
          )
        </div>
      </div>
      <div>
        <div> ("Day 2" |> Utils.s) </div>
        <h3> ("Get inspired" |> str) </h3>
        <div>
          (
            "Great speakers & trainers of the Reason community with special guests of the Reason & ReasonReact project team will inspire attendees about more advanced topics.\n"
            |> str
          )
        </div>
      </div>
      <div>
        <div> ("Day 3" |> Utils.s) </div>
        <h3> ("Get productive" |> str) </h3>
        <div>
          (
            "Attendees apply their learnings in a hackathon, working on a project they are interested in, aided by our mentors, speakers and volunteers."
            |> str
          )
        </div>
      </div>
      <h2> ("Speakers" |> str) </h2>
      <h2> ("Sponsors" |> str) </h2>
      <div>
        <img src=Assets.patrick width="28" height="28" />
        ("Patrick" |> str)
        <img src=Assets.nik width="28" height="28" />
        ("Nik" |> str)
        <img src=Assets.andrey width="28" height="28" />
        ("Andrey" |> str)
        <p>
          (
            "ReasonConf is the not-for-profit conference\norganized by community efforts by people\nbehind React Vienna community."
            |> str
          )
        </p>
        <div>
          <a href="https://www.example.com">
            ("Subscribe to newsletter" |> str)
          </a>
          <Gatsby.Link to_="/coc/"> "Code of Conduct" </Gatsby.Link>
          <a href="https://www.example.com"> ("Contact Us" |> str) </a>
        </div>
        <div>
          <a href="https://www.twitter.com"> ("Twitter" |> str) </a>
          <a href="https://www.facebook.com"> ("Facebook" |> str) </a>
          <a href="https://www.github.com"> ("Github" |> str) </a>
        </div>
        <div>
          <Gatsby.Link to_="/imprint/"> ("Imprint" |> str) </Gatsby.Link>
          <div> ("Atrium, 2018" |> str) </div>
        </div>
      </div>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));