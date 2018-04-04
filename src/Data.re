[@bs.module] external nikImg : string = "./assets/nik.jpg";

[@bs.module] external patrickImg : string = "./assets/patrick.jpg";

[@bs.module] external andreyImg : string = "./assets/andrey.jpg";

[@bs.module] external chengLouImg : string = "./assets/cheng-lou.jpg";

[@bs.module]
external keiraHodgkisonImg : string = "./assets/keira-hodgkison.jpg";

[@bs.module] external lauraGaetanoImg : string = "./assets/laura-gaetano.jpg";

[@bs.module] external sanderSpiesImg : string = "./assets/sander.jpg";

[@bs.module]
external cristianoCalcagnoImg : string = "./assets/cristiano-calcagno.jpg";

let s = Utils.s;

type organizerData = {
  name: string,
  imgUrl: string,
  href: string,
  altText: string,
};

type social = {
  twitterUser: option(string),
  githubUser: option(string),
  website: option(string),
};

type talk = {
  title: string,
  abstract: string,
};

type speakerData = {
  name: string,
  company: string,
  imgUrl: string,
  description: string,
  talk: option(talk),
  social,
};

let headlineSpeakers = [|
  {
    name: "Cheng Lou",
    company: "Facebook",
    imgUrl: chengLouImg,
    description: {j|test|j},
    talk: Some({title: "Some Talk Name", abstract: "Foo"}),
    social: {
      githubUser: Some("chenglou"),
      twitterUser: Some("_chenglou"),
      website: None,
    },
  },
  {
    name: "Laura Gaetano",
    company: "Travis Foundation",
    imgUrl: lauraGaetanoImg,
    description: {j|test|j},
    talk: Some({title: "Some Talk Name", abstract: "Foo"}),
    social: {
      githubUser: Some("chenglou"),
      twitterUser: Some("_chenglou"),
      website: None,
    },
  },
  {
    name: "Keira Hodgkison",
    company: "Culture Amp",
    imgUrl: keiraHodgkisonImg,
    description: {j|test|j},
    talk: Some({title: "Some Talk Name", abstract: "Foo"}),
    social: {
      githubUser: Some("chenglou"),
      twitterUser: Some("_chenglou"),
      website: None,
    },
  },
  {
    name: "Cristiano Calcagno",
    company: "Facebook",
    imgUrl: cristianoCalcagnoImg,
    description: {j|test|j},
    talk: Some({title: "Some Talk Name", abstract: "Foo"}),
    social: {
      githubUser: Some("chenglou"),
      twitterUser: Some("_chenglou"),
      website: None,
    },
  },
|];

let otherSpeakers = [|
  {
    name: "Sander Spies",
    company: "Freelancer",
    imgUrl: sanderSpiesImg,
    description: "As a developer always focusing on the reader of the code. Fell in love with React in 2013 because of the simplification it brought to state management. Regrets asking for Flux. Big fan of CSS-in-JS and currently lost in OCaml. Strongly believes in the importance of moving developers to Reason as it removes a lot of the burdens that JavaScript developers face daily. Can be blamed for several things in Reason like JSX. Reason fan since day one.",
    talk: Some({title: "Down the WebAssembly rabbit hole", abstract: "TBA"}),
    social: {
      githubUser: Some("SanderSpies"),
      twitterUser: Some("Sander_Spies"),
      website: None,
    },
  },
|];

let speakers: array(speakerData) =
  Array.concat([headlineSpeakers, otherSpeakers]);

/* Js.log(speakers); */
let organizers = (
  {
    name: "Nik",
    imgUrl: nikImg,
    href: "https://twitter.com/nikgraf",
    altText: "Photo of Nik",
  },
  {
    name: "Andrey",
    imgUrl: andreyImg,
    href: "https://twitter.com/okonetchnikov",
    altText: "Photo of Andrey",
  },
  {
    name: "Patrick",
    imgUrl: patrickImg,
    href: "https://twitter.com/ryyppy",
    altText: "Photo of Patrick",
  },
);
