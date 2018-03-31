'use strict';

var Utils = require("../Utils.js");
var React = require("react");
var Gatsby = require("../Gatsby.js");
var ReasonReact = require("reason-react/src/ReasonReact.js");

var component = ReasonReact.statelessComponent("CodeOfConduct");

function ste(prim) {
  return prim;
}

function make() {
  var newrecord = component.slice();
  newrecord[/* render */9] = (function () {
      return React.createElement("div", undefined, React.createElement("div", undefined, Utils.s("World's first Reason conference for web-developers & OCaml enthusiasts")), React.createElement("div", undefined, React.createElement("div", undefined, Utils.s("11-13 May 2018")), React.createElement("div", undefined, Utils.s("Vienna, Austria"))), React.createElement("p", undefined, Utils.s("We believe Reason is the next big thing and we think it is time to bring the community together, learn about the language and talk about new innovations.\n")), React.createElement("h2", undefined, Utils.s("Get productive with Reason in 3 days")), React.createElement("div", undefined, React.createElement("div", undefined, "Day 1"), React.createElement("h3", undefined, Utils.s("Get started")), React.createElement("div", undefined, Utils.s("Full day workshop to get every attendee into the language & platform."))), React.createElement("div", undefined, React.createElement("div", undefined, Utils.s("Day 2")), React.createElement("h3", undefined, Utils.s("Get inspired")), React.createElement("div", undefined, Utils.s("Great speakers & trainers of the Reason community with special guests of the Reason & ReasonReact project team will inspire attendees about more advanced topics.\n"))), React.createElement("div", undefined, React.createElement("div", undefined, Utils.s("Day 3")), React.createElement("h3", undefined, Utils.s("Get productive")), React.createElement("div", undefined, Utils.s("Attendees apply their learnings in a hackathon, working on a project they are interested in, aided by our mentors, speakers and volunteers."))), React.createElement("h2", undefined, Utils.s("Speakers")), React.createElement("h2", undefined, Utils.s("Sponsors")), React.createElement("div", undefined, React.createElement("p", undefined, Utils.s("ReasonConf is the not-for-profit conference\norganized by community efforts by people\nbehind React Vienna community.")), React.createElement("div", undefined, ReasonReact.element(/* None */0, /* None */0, Gatsby.Link[/* make */0]("/coc/", /* array */["Code of Conduct"])))));
    });
  return newrecord;
}

var $$default = ReasonReact.wrapReasonForJs(component, (function () {
        return make(/* array */[]);
      }));

var str = Utils.s;

exports.component = component;
exports.ste = ste;
exports.str = str;
exports.make = make;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* component Not a pure module */
