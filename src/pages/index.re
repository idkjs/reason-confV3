let component = ReasonReact.statelessComponent("Home");

let ste = ReasonReact.stringToElement;

let str = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <article>
      <div className="teaser">
        /* this div gets 70% of div teaser */

          <div>
            <img src=Assets.logo width="507" height="132" />
            <p>
              (
                "World's first Reason conference for web-developers & OCaml enthusiasts"
                |> Utils.s
              )
            </p>
            <p>
              (
                "We believe Reason is the next big thing and we think it is time to bring the community together, learn about the language and talk about new innovations.\n"
                |> str
              )
            </p>
          </div>
          /* this second div gets 30% of div teaser */
          <div>
            <div> ({j|11–13 May 2018|j} |> str) </div>
            <div> ("Vienna, Austria" |> str) </div>
            <a href="#tickets"> ("Buy Tickets" |> str) </a>
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
        <div> ("Day 2" |> str) </div>
        <h3> ("Get inspired" |> str) </h3>
        <p>
          (
            "Great speakers & trainers of the Reason community with special guests of the Reason & ReasonReact project team will inspire attendees about more advanced topics.\n"
            |> str
          )
        </p>
      </div>
      <div>
        <div> ("Day 3" |> str) </div>
        <h3> ("Get productive" |> str) </h3>
        <p>
          (
            "Attendees apply their learnings in a hackathon, working on a project they are interested in, aided by our mentors, speakers and volunteers."
            |> str
          )
        </p>
      </div>
      <h2> ("Speakers" |> str) </h2>
      <div>
        <img src=Assets.chengLou width="225" height="225" />
        (ste("Cheng Lou"))
        <img src=Assets.lauraGaetano width="225" height="225" />
        (ste("Laura Gaetano"))
        <img src=Assets.keiraHodgkison width="225" height="225" />
        (ste("Keira"))
        <img src=Assets.cristianoCalcagno width="225" height="225" />
        (ste("Cristiano Calcagno"))
      </div>
      <h2> ("Sponsors" |> str) </h2>
      <p> ({j|Reason Conf is looking for amazing sponsors...|j} |> str) </p>
      <h2 id="tickets"> ("Tickets" |> str) </h2>
      <p> ("Coming soon..." |> str) </p>
    </article>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));