webpackJsonp([0xfca11365d841], {
  238: function(e, t, n) {
    "use strict";
    function c(e, t) {
      return i.wrapJsForReason(r.Widget, { event: e }, t);
    }
    var i = n(3),
      r = n(256),
      s = [c];
    t.Tickets = s;
  },
  254: function(e, t, n) {
    "use strict";
    function c() {
      var e = a.slice();
      return (
        (e[9] = function() {
          return s.createElement(
            "section",
            { className: "tickets" },
            s.createElement(
              "div",
              { className: "container_centered" },
              s.createElement("h1", void 0, r.s("Tickets")),
              o.element(0, 0, i.Tickets[0]("shing/demo-2018", []))
            )
          );
        }),
        e
      );
    }
    var i = n(238),
      r = n(7),
      s = n(1),
      o = n(3),
      a = o.statelessComponent("Tickets"),
      u = o.wrapReasonForJs(a, function(e) {
        return c(e.children);
      }),
      d = 0,
      l = 0;
    (t.Link = d),
      (t.component = a),
      (t.Tickets = l),
      (t.make = c),
      (t.$$default = u),
      (t.default = u),
      (t.__esModule = !0);
  },
  256: function(e, t, n) {
    "use strict";
    function c(e) {
      return e && e.__esModule ? e : { default: e };
    }
    (t.__esModule = !0), (t.Widget = void 0);
    var i = n(1),
      r = c(i);
    t.Widget = function(e) {
      var t = e.event;
      return r.default.createElement("tito-widget", { event: t });
    };
  }
});
//# sourceMappingURL=component---src-pages-tickets-js-51a894c7c9c401e8bada.js.map
