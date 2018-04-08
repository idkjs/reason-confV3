webpackJsonp([0xe8025391c88], {
  242: function(e, t, s) {
    "use strict";
    function a(e, t) {
      var s = m.slice();
      return (
        (s[9] = function() {
          var t = e[4];
          return r.createElement(
            "div",
            { className: c.root },
            r.createElement(
              "figure",
              { className: c.figure },
              r.createElement("img", { className: c.image, src: e[2] })
            ),
            r.createElement(
              "div",
              void 0,
              r.createElement("h2", { className: c.name }, n.s(e[0])),
              r.createElement("p", void 0, n.s(e[3])),
              t
                ? r.createElement(
                    "p",
                    void 0,
                    n.s("Talk: "),
                    r.createElement("a", { href: "" }, n.s(t[0][0]))
                  )
                : null
            )
          );
        }),
        s
      );
    }
    var n = s(7),
      r = s(1),
      l = s(3),
      c = s(352),
      m = l.statelessComponent("SpeakerDetails"),
      o = n.s;
    (t.s = o), (t.component = m), (t.make = a);
  },
  352: function(e, t) {
    e.exports = {
      figure: "src-components----SpeakerDetails-module---figure---3lAYP",
      image: "src-components----SpeakerDetails-module---image---2iB6p",
      name: "src-components----SpeakerDetails-module---name---9jbcl"
    };
  },
  252: function(e, t, s) {
    "use strict";
    function a(e) {
      return m.createElement(
        "li",
        { key: e[0], className: u.listItem },
        o.element(0, 0, i.make(e, []))
      );
    }
    function n() {
      var e = p.slice();
      return (
        (e[9] = function() {
          return m.createElement(
            "div",
            { className: u.root },
            m.createElement("h1", void 0, c.s("Speakers")),
            m.createElement("ul", { className: u.list }, l.map(a, r.speakers))
          );
        }),
        e
      );
    }
    var r = s(62),
      l = s(43),
      c = s(7),
      m = s(1),
      o = s(3),
      i = s(242),
      u = s(355),
      p = o.statelessComponent("Speakers"),
      f = o.wrapReasonForJs(p, function(e) {
        return n(e.children);
      }),
      d = c.s;
    (t.component = p),
      (t.s = d),
      (t.toSpeakerDetail = a),
      (t.make = n),
      (t.$$default = f),
      (t.default = f),
      (t.__esModule = !0);
  },
  355: function(e, t) {
    e.exports = {
      list: "src-pages----Speakers-module---list---3BBQP",
      listItem: "src-pages----Speakers-module---listItem---15I0g"
    };
  }
});
//# sourceMappingURL=component---src-pages-speakers-js-fa1c19b0788e59876e7d.js.map
