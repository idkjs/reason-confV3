"use strict";

var $$Array = require("bs-platform/lib/js/array.js");
var Utils = require("./Utils.js");
var NikJpg = require("./assets/nik.jpg");
var AndreyJpg = require("./assets/andrey.jpg");
var SanderJpg = require("./assets/sander.jpg");
var PatrickJpg = require("./assets/patrick.jpg");
var ChengLouJpg = require("./assets/cheng-lou.jpg");
var LauraGaetanoJpg = require("./assets/laura-gaetano.jpg");
var KeiraHodgkisonJpg = require("./assets/keira-hodgkison.jpg");
var CristianoCalcagnoJpg = require("./assets/cristiano-calcagno.jpg");

var headlineSpeakers = /* array */ [
  /* record */ [
    /* name */ "Cheng Lou",
    /* company */ "Facebook",
    /* imgUrl */ ChengLouJpg,
    /* description */ "test",
    /* talk : Some */ [
      /* record */ [/* title */ "Some Talk Name", /* abstract */ "Foo"]
    ],
    /* social : record */ [
      /* twitterUser : Some */ ["_chenglou"],
      /* githubUser : Some */ ["chenglou"],
      /* website : None */ 0
    ]
  ],
  /* record */ [
    /* name */ "Laura Gaetano",
    /* company */ "Travis Foundation",
    /* imgUrl */ LauraGaetanoJpg,
    /* description */ "test",
    /* talk : Some */ [
      /* record */ [/* title */ "Some Talk Name", /* abstract */ "Foo"]
    ],
    /* social : record */ [
      /* twitterUser : Some */ ["_chenglou"],
      /* githubUser : Some */ ["chenglou"],
      /* website : None */ 0
    ]
  ],
  /* record */ [
    /* name */ "Keira Hodgkison",
    /* company */ "Culture Amp",
    /* imgUrl */ KeiraHodgkisonJpg,
    /* description */ "test",
    /* talk : Some */ [
      /* record */ [/* title */ "Some Talk Name", /* abstract */ "Foo"]
    ],
    /* social : record */ [
      /* twitterUser : Some */ ["_chenglou"],
      /* githubUser : Some */ ["chenglou"],
      /* website : None */ 0
    ]
  ],
  /* record */ [
    /* name */ "Cristiano Calcagno",
    /* company */ "Facebook",
    /* imgUrl */ CristianoCalcagnoJpg,
    /* description */ "test",
    /* talk : Some */ [
      /* record */ [/* title */ "Some Talk Name", /* abstract */ "Foo"]
    ],
    /* social : record */ [
      /* twitterUser : Some */ ["_chenglou"],
      /* githubUser : Some */ ["chenglou"],
      /* website : None */ 0
    ]
  ]
];

var otherSpeakers = /* array */ [
  /* record */ [
    /* name */ "Sander Spies",
    /* company */ "Freelancer",
    /* imgUrl */ SanderJpg,
    /* description */ "As a developer always focusing on the reader of the code. Fell in love with React in 2013 because of the simplification it brought to state management. Regrets asking for Flux. Big fan of CSS-in-JS and currently lost in OCaml. Strongly believes in the importance of moving developers to Reason as it removes a lot of the burdens that JavaScript developers face daily. Can be blamed for several things in Reason like JSX. Reason fan since day one.",
    /* talk : Some */ [
      /* record */ [
        /* title */ "Down the WebAssembly rabbit hole",
        /* abstract */ "TBA"
      ]
    ],
    /* social : record */ [
      /* twitterUser : Some */ ["Sander_Spies"],
      /* githubUser : Some */ ["SanderSpies"],
      /* website : None */ 0
    ]
  ]
];

var speakers = $$Array.concat(
  /* :: */ [headlineSpeakers, /* :: */ [otherSpeakers, /* [] */ 0]]
);

var organizers_000 = /* record */ [
  /* name */ "Nik",
  /* imgUrl */ NikJpg,
  /* href */ "https://twitter.com/nikgraf",
  /* altText */ "Photo of Nik"
];

var organizers_001 = /* record */ [
  /* name */ "Andrey",
  /* imgUrl */ AndreyJpg,
  /* href */ "https://twitter.com/okonetchnikov",
  /* altText */ "Photo of Andrey"
];

var organizers_002 = /* record */ [
  /* name */ "Patrick",
  /* imgUrl */ PatrickJpg,
  /* href */ "https://twitter.com/ryyppy",
  /* altText */ "Photo of Patrick"
];

var organizers = /* tuple */ [organizers_000, organizers_001, organizers_002];

var s = Utils.s;

exports.s = s;
exports.headlineSpeakers = headlineSpeakers;
exports.otherSpeakers = otherSpeakers;
exports.speakers = speakers;
exports.organizers = organizers;
/* headlineSpeakers Not a pure module */
