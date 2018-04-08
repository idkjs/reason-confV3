webpackJsonp([53569954864128], {
  63: function(e, t, n) {
    "use strict";
    function r(e, t) {
      var n = i.slice();
      return (
        (n[9] = function() {
          return a.createElement(
            "figure",
            { className: s.root },
            a.createElement("img", { alt: e[0], src: e[2] }),
            a.createElement(
              "figcaption",
              void 0,
              a.createElement("h3", { className: s.name }, o.s(e[0])),
              a.createElement("p", void 0, o.s(e[1]))
            )
          );
        }),
        n
      );
    }
    var o = n(7),
      a = n(1),
      c = n(3),
      s = n(71),
      i = c.statelessComponent("SpeakerCard"),
      l = o.s;
    (t.s = l), (t.component = i), (t.make = r);
  },
  71: function(e, t) {
    e.exports = {
      root: "src-components----SpeakerCard-module---root---2NR13",
      name: "src-components----SpeakerCard-module---name---1Si23",
      company: "src-components----SpeakerCard-module---company---FZrs2"
    };
  },
  251: function(e, t, n) {
    "use strict";
    function r(e) {
      return m.createElement(
        "tr",
        void 0,
        m.createElement("td", void 0, l.s(e[0])),
        m.createElement("td", void 0, l.s(e[1]))
      );
    }
    function o(e) {
      var t,
        n = e[1];
      if (n) {
        var r,
          o = n[0],
          a = o[4];
        if (a) {
          var c = a[0];
          r = m.createElement(
            "section",
            void 0,
            m.createElement("h2", void 0, l.s(c[0])),
            m.createElement("p", void 0, l.s(c[1]))
          );
        } else r = null;
        t = m.createElement("div", void 0, r, d.element(0, 0, u.make(o, [])));
      } else t = m.createElement("div", void 0, l.s("Speaker Info not found"));
      return m.createElement(
        "tr",
        void 0,
        m.createElement("td", void 0, l.s(e[0])),
        m.createElement("td", void 0, t)
      );
    }
    function a(e) {
      switch (0 | e.tag) {
        case 0:
          return o(e[0]);
        case 1:
        case 2:
          return r(e[0]);
      }
    }
    function c() {
      var e = v.slice();
      return (
        (e[9] = function() {
          return m.createElement(
            "div",
            void 0,
            m.createElement("h1", void 0, l.s("Schedule")),
            m.createElement(
              "table",
              void 0,
              m.createElement("tbody", void 0, i.map(a, s.schedule))
            )
          );
        }),
        e
      );
    }
    var s = n(62),
      i = n(43),
      l = n(7),
      m = n(1),
      d = n(3),
      u = n(63),
      v = d.statelessComponent("Schedule"),
      p = d.wrapReasonForJs(v, function(e) {
        return c(e.children);
      }),
      E = l.s,
      f = r;
    (t.component = v),
      (t.s = E),
      (t.miscRow = r),
      (t.breakRow = f),
      (t.talkRow = o),
      (t.createRow = a),
      (t.make = c),
      (t.$$default = p),
      (t.default = p),
      (t.__esModule = !0);
  }
});
//# sourceMappingURL=component---src-pages-schedule-js-4c99551d84671c2bdc90.js.map
