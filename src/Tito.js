'use strict';

var ReasonReact = require("reason-react/src/ReasonReact.js");
var Titowidget = require("./titowidget");

function make($$event, children) {
  return ReasonReact.wrapJsForReason(Titowidget.Widget, {
              event: $$event
            }, children);
}

var Tickets = /* module */[/* make */make];

exports.Tickets = Tickets;
/* ReasonReact Not a pure module */
