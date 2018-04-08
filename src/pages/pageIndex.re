let component = ReasonReact.statelessComponent("Home");

[@bs.module] external scriptLogo : string = "../assets/script18-logo.svg";

[@bs.module]
external reasonViennaLogo : string = "../assets/reasonvienna-logo.svg";

[@bs.module]
external reactViennaLogo : string = "../assets/reactvienna-logo.svg";

let str = Utils.s;

module Tickets = Tito.Tickets;

let speakerColumn = (speaker: Data.speakerData) =>
  <li className="speaker-list--item">
    <SpeakerCard speaker key=speaker.name />
  </li>;

/* let speakerColumn = (i, speaker) =>
   <SpeakerCard speaker key=(string_of_int(i)) />; */
let make = _children => {
  ...component,
  render: _self =>
    <article>
      <header className="teaser">
        <section className="container_centered grid grid-6col">
          <h1 className="teaser--logo">
            <img
              src=Assets.logo
              alt="Demo Conf 2018"
              className="teaser--image"
            />
          </h1>
          <nav className="teaser--navigation">
            <Navigation pathName="/" />
          </nav>
          <h2 className="teaser--dates">
            <time dateTime="2018-05-11/2018-05-13">
              ({j|11–13 May 2018|j} |> str)
            </time>
          </h2>
          <p className="teaser--location"> ("Vienna, Austria" |> str) </p>
          <p className="teaser--tagline">
            (
              "World's first Reason conference for web-developers & OCaml enthusiasts"
              |> str
            )
          </p>
        </section>
      </header>
      /* <p className="teaser--text">
           (
             "Reason is the next big thing and it is time to bring the community together. Come and learn about the language and get inspired for innovation.\n"
             |> str
           )
         </p> */
      <section className="offering">
        <div className="container_centered grid grid-6col">
          <h2 className="offering--heading">
            ("Get productive with Reason in 3 days" |> str)
          </h2>
          <section className="offering--text">
            <p>
              (
                "Reason is the next big thing and it is time to bring the community together. Come and learn about the language and get inspired for innovation."
                |> str
              )
            </p>
            <p>
              (
                "We want to motivate you to add Reason & OCaml to your professional toolbelt and make you feel comfortable in the ecosystem."
                |> str
              )
            </p>
            <p>
              (
                "This conference is aiming for a well-balanced schedule with a practical, social and theoretical context."
                |> str
              )
            </p>
          </section>
          <dl className="timeline">
            <dt className="timeline--date">
              <time dateTime="2018-05-11">
                ("11" |> str)
                <sup> ("th" |> str) </sup>
                (" May, Friday" |> str)
              </time>
            </dt>
            <dd className="timeline--content">
              <h3> ("Day 1: Get started" |> str) </h3>
              <p>
                (
                  {js|
                    An optional workshop day to get every beginner and
                    intermediate attendee into the language &
                    platform.
                  |js}
                  |> str
                )
              </p>
            </dd>
            <dt className="timeline--date">
              <time dateTime="2018-05-12">
                ("12" |> str)
                <sup> ("th" |> str) </sup>
                (" May, Saturday" |> str)
              </time>
            </dt>
            <dd className="timeline--content">
              <h3> ("Day 2: Get inspired" |> str) </h3>
              <p>
                (
                  {js|
                    This is the main conference day with lectures and talks.
                    Speakers of the Reason / OCaml community (with special guests
                    from the Reason & ReasonReact project) will inspire attendees for
                    more advanced topics.
                  |js}
                  |> str
                )
              </p>
            </dd>
            <dt className="timeline--date">
              <time dateTime="2018-05-13">
                ("13" |> str)
                <sup> ("th" |> str) </sup>
                (" May, Sunday" |> str)
              </time>
            </dt>
            <dd className="timeline--content">
              <h3> ("Day 3: Get productive" |> str) </h3>
              <p>
                (
                  {js|
                    On the last day we encourage attendees to start
                    their first Reason projects, aided by our mentors,
                    speakers and volunteers. Alternatively for those
                    who want to relax, we offer a local-guided tour
                    through the beautiful city Vienna!
                  |js}
                  |> str
                )
              </p>
            </dd>
          </dl>
        </div>
      </section>
      /* </div> */
      <section className="speakers">
        <div className="container_centered">
          <h2> ("Featured Speakers" |> str) </h2>
          <ul className="speaker-list">
            (
              /* Data.speakers */
              Data.headlineSpeakers
              |> Array.map(speakerColumn)
              |> ReasonReact.arrayToElement
            )
          </ul>
          <p className="extraText">
            (
              {j|... and many more to come. The final schedule will be announced soon.|j}
              |> str
            )
          </p>
        </div>
      </section>
      <section className="sponsors">
        <div className="container_centered">
          <h2> ("Sponsors & Partners" |> str) </h2>
          <div className="partners grid grid-6col">
            <img src=reactViennaLogo className="partners--logo" />
            <img src=scriptLogo className="partners--logo" />
            <img src=reasonViennaLogo className="partners--logo" />
          </div>
          <p className="extraText">
            (
              "We are happily collaborating with research institutes and businesses. "
              |> str
            )
            <a href="/contact"> ("Get in touch!" |> str) </a>
          </p>
        </div>
      </section>
    </article>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
