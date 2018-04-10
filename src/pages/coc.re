let component = ReasonReact.statelessComponent("CodeOfConduct");

open Utils;

let make = _children => {
  ...component,
  render: _self =>
    <div>
      <h1> ({j|Code of Conduct|j} |> Utils.s) </h1>
      <p>
        (
          s(
            "All attendees, speakers, sponsors and volunteers at our conference are required to agree with the following code of conduct. Organisers will enforce this code throughout the event. We expect cooperation from all participants to help ensure a safe environment for everybody.",
          )
        )
      </p>
      <h2> (s("Need Help?")) </h2>
      <p> (s("You have our contact details in the emails we've sent.")) </p>
      <h2> (s("The Quick Version")) </h2>
      <p>
        <div> (s("Demo Team")) </div>
        <div>
          (s("Twitter: "))
          <a href="https://twitter.com/reasonconf" target="_blank">
            (s("@reasonconf"))
          </a>
        </div>
        <div>
          (s("Email: "))
          <a href="mailto:admin@shing.co"> (s("admin@shing.co")) </a>
        </div>
      </p>
      <p>
        <div> (s("Alain Armand")) </div>
        <div>
          (s("Twitter: "))
          <a href="https://twitter.com/_idkjs" target="_blank">
            (s("@_idkjs"))
          </a>
        </div>
        <div>
          (s("Email: "))
          <a href="mailto:admin@shing.co"> (s("admin@shing.co")) </a>
        </div>
      </p>
      <h2> (s("The Quick Version")) </h2>
      <p>
        (
          ate([|
            s(
              "Our conference is dedicated to providing a harassment-free conference experience for everyone, regardless of gender, gender identity and expression, age, sexual orientation, disability, physical appearance, body size, race, ethnicity, religion (or lack thereof), or technology choices. We do not tolerate harassment of conference participants in any form. Sexual language and imagery is not appropriate for any conference venue, including talks, workshops, parties, Twitter and other online media. Conference participants violating these rules may be sanctioned or expelled from the conference ",
            ),
            <em> (s("without a refund")) </em>,
            s(" at the discretion of the conference organisers."),
          |])
        )
      </p>
      <h2> (s("The Less Quick Version")) </h2>
      <p>
        (
          s(
            "Harassment includes offensive verbal comments related to gender, gender identity and expression, age, sexual orientation, disability, physical appearance, body size, race, ethnicity, religion, technology choices, sexual images in public spaces, deliberate intimidation, stalking, following, harassing photography or recording, sustained disruption of talks or other events, inappropriate physical contact, and unwelcome sexual attention.",
          )
        )
      </p>
      <p>
        (
          s(
            "Participants asked to stop any harassing behavior are expected to comply immediately.",
          )
        )
      </p>
      <p>
        (
          s(
            "Sponsors are also subject to the anti-harassment policy. In particular, sponsors should not use sexualised images, activities, or other material. Booth staff (including volunteers) should not use sexualised clothing/uniforms/costumes, or otherwise create a sexualised environment.",
          )
        )
      </p>
      <p>
        (
          s(
            "If a participant engages in harassing behavior, the conference organisers may take any action they deem appropriate, including warning the offender or expulsion from the conference with no refund.",
          )
        )
      </p>
      <p>
        (
          s(
            "If you are being harassed, notice that someone else is being harassed, or have any other concerns, please contact a member of conference staff immediately. Conference staff can be identified as they�\128\153ll be wearing branded clothing and/or badges.",
          )
        )
      </p>
      <p>
        (
          s(
            "Conference staff will be happy to help participants contact hotel/venue security or local law enforcement, provide escorts, or otherwise assist those experiencing harassment to feel safe for the duration of the conference. We value your attendance.",
          )
        )
      </p>
      <p>
        (
          s(
            "We expect participants to follow these rules at conference and workshop venues and conference-related social events.",
          )
        )
      </p>
    </div>,
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));
