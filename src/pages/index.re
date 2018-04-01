let component = ReasonReact.statelessComponent("Home");

let ste = ReasonReact.stringToElement;

let str = Utils.s;

let make = _children => {
  ...component,
  render: _self =>
    <article>
      <header className="teaser">
        /* this div gets 70% of div teaser */

          <section className="teaser--wrapper container--centered">
            <div>
              <h1 className="teaser--logo">
                <img
                  src=Assets.logo
                  width="507"
                  height="132"
                  alt="Reason Conf Logo"
                />
              </h1>
              <h2 className="teaser--tagline">
                (
                  "World's first Reason conference for web-developers & OCaml enthusiasts"
                  |> str
                )
              </h2>
              <p className="teaser--text">
                (
                  "We believe Reason is the next big thing and we think it is time to bring the community together, learn about the language and talk about new innovations.\n"
                  |> str
                )
              </p>
            </div>
            /* this second div gets 30% of div teaser */
            <div>
              <p> ({j|11–13 May 2018|j} |> str) </p>
              <p> ("Vienna, Austria" |> str) </p>
              <a href="#tickets"> ("Buy Tickets" |> str) </a>
            </div>
          </section>
        </header>
      <section className="timeline">
        <h2> ("Get productive with Reason in 3 days" |> str) </h2>
        <div>
          <div> (ste("Day 1")) </div>
          <h3> ("Get started" |> str) </h3>
          <p>
            (
              "Full day workshop to get every attendee into the language & platform."
              |> str
            )
          </p>
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
      </section>
      <section className="speakers">
        <h2> ("Speakers" |> str) </h2>
        <ul className="speaker-list">
          <li className="speaker-list--item">
            <figure className="speaker">
              <img src=Assets.chengLou width="225" height="225" />
              <figcaption>
                <p className="speaker--name"> (ste("Cheng Lou")) </p>
                <p className="speaker--company"> (ste("Facebook")) </p>
              </figcaption>
            </figure>
          </li>
          <li className="speaker-list--item">
            <figure className="speaker">
              <img src=Assets.lauraGaetano width="225" height="225" />
              <figcaption>
                <p className="speaker--name"> (ste("Laura Gaetano")) </p>
                <p className="speaker--company">
                  (ste("Travis Foundation"))
                </p>
              </figcaption>
            </figure>
          </li>
          <li className="speaker-list--item">
            <figure className="speaker">
              <img src=Assets.keiraHodgkison width="225" height="225" />
              <figcaption>
                <p className="speaker--name"> (ste("Keira")) </p>
                <p className="speaker--company"> (ste("Culture Amp")) </p>
              </figcaption>
            </figure>
          </li>
          <li className="speaker-list--item">
            <figure className="speaker">
              <img src=Assets.cristianoCalcagno width="225" height="225" />
              <figcaption>
                <p className="speaker--name"> (ste("Cristiano Calcagno")) </p>
                <p className="speaker--company"> (ste("Facebook")) </p>
              </figcaption>
            </figure>
          </li>
        </ul>
      </section>
      <section className="sponsors">
        <h2> ("Sponsors" |> str) </h2>
        <p> ({j|Reason Conf is looking for amazing sponsors...|j} |> str) </p>
      </section>
      <section className="tickets">
        <h2 id="tickets"> ("Tickets" |> str) </h2>
        <p> ("Coming soon..." |> str) </p>
      </section>
    </article>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
