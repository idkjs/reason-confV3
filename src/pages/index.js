'use strict';

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
      return React.createElement("div", undefined, React.createElement("h1", undefined, "Hi People"), ReasonReact.element(/* None */0, /* None */0, Gatsby.Link[/* make */0]("/coc/", /* array */["Code of Conduct"])));
    });
  return newrecord;
}

var $$default = ReasonReact.wrapReasonForJs(component, (function () {
        return make(/* array */[]);
      }));

exports.component = component;
exports.ste = ste;
exports.make = make;
exports.$$default = $$default;
exports.default = $$default;
exports.__esModule = true;
/* component Not a pure module */
