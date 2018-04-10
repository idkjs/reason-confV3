[@bs.module] external style : Js.t({..}) = "./sponsorTier.module.scss";

open Utils;

let component = ReasonReact.statelessComponent("SponsorTier");

let make = (~tier: Data.Tier.t, _children) => {
  ...component,
  render: _self => {
    let className =
      switch (tier.id) {
      | "main" => style##main
      | "regular" => style##regular
      | "supporter" => style##supporter
      | _ => style##root
      };
    let href = "mailto:admin@shing.co?subject=Sponsoring: " ++ tier.name;
    <a href className>
      <header className=style##header>
        <h3 className=style##name> (tier.name |> s) </h3>
        <p className=style##amount>
          (tier.amount |> soi |> s)
          ({j| x |j} |> s)
          <h4 className=style##cost> (tier.cost |> soi |> s) </h4>
          ({j|€|j} |> s)
        </p>
      </header>
      <section className=style##description>
        (tier.description |> md)
      </section>
    </a>;
  },
};
