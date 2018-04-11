"use strict";

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Basicscroll = require("../../vendor/basicscroll");

function maybeCreate(opts) {
  var match = typeof window === "undefined" ? undefined : window;
  if (match !== undefined) {
    return /* Some */ [Basicscroll.create(opts)];
  } else {
    return /* None */ 0;
  }
}

var BasicScroll = /* module */ [/* maybeCreate */ maybeCreate];

var component = ReasonReact.reducerComponent("ParallaxScroll");

function setScrollAreaRef(theRef, param) {
  param[/* state */ 2][/* scrollAreaRef */ 1][0] =
    theRef == null ? /* None */ 0 : [theRef];
  return /* () */ 0;
}

function initScroll(from, to_, props, state) {
  var match = state[/* instance */ 0][0];
  var match$1 = state[/* scrollAreaRef */ 1][0];
  if (match || !match$1) {
    return /* () */ 0;
  } else {
    var newInstance = maybeCreate({
      elem: match$1[0],
      from: from,
      to: to_,
      props: props
    });
    if (newInstance) {
      var instance = newInstance[0];
      instance.start();
      state[/* instance */ 0][0] = /* Some */ [instance];
      return /* () */ 0;
    } else {
      return /* () */ 0;
    }
  }
}

function make(from, to_, props, children) {
  return /* record */ [
    /* debugName */ component[/* debugName */ 0],
    /* reactClassInternal */ component[/* reactClassInternal */ 1],
    /* handedOffState */ component[/* handedOffState */ 2],
    /* willReceiveProps */ function(self) {
      initScroll(from, to_, props, self[/* state */ 2]);
      return self[/* state */ 2];
    },
    /* didMount */ function(self) {
      initScroll(from, to_, props, self[/* state */ 2]);
      return /* NoUpdate */ 0;
    },
    /* didUpdate */ component[/* didUpdate */ 5],
    /* willUnmount */ function(self) {
      var match = self[/* state */ 2][/* instance */ 0][0];
      if (match) {
        var instance = match[0];
        instance.update();
        instance.stop();
        self[/* state */ 2][/* instance */ 0][0] = /* None */ 0;
        return /* () */ 0;
      } else {
        return /* () */ 0;
      }
    },
    /* willUpdate */ component[/* willUpdate */ 7],
    /* shouldUpdate */ component[/* shouldUpdate */ 8],
    /* render */ function(self) {
      return React.createElement(
        "div",
        {
          ref: Curry._1(self[/* handle */ 0], setScrollAreaRef)
        },
        children
      );
    },
    /* initialState */ function() {
      return /* record */ [
        /* instance */ [/* None */ 0],
        /* scrollAreaRef */ [/* None */ 0]
      ];
    },
    /* retainedProps */ component[/* retainedProps */ 11],
    /* reducer */ function(_, _$1) {
      return /* NoUpdate */ 0;
    },
    /* subscriptions */ component[/* subscriptions */ 13],
    /* jsElementWrapped */ component[/* jsElementWrapped */ 14]
  ];
}

exports.BasicScroll = BasicScroll;
exports.component = component;
exports.setScrollAreaRef = setScrollAreaRef;
exports.initScroll = initScroll;
exports.make = make;
/* component Not a pure module */
