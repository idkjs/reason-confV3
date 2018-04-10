[@bs.module] external style : Js.t({..}) = "./sponsorTier.module.scss";

open Utils;

let component = ReasonReact.statelessComponent("SponsorTier");

let make = (~tier: Data.tierData, _children) => {
  ...component,
  render: _self => {
    let className =
      switch (tier.name) {
      | "Bronze" => style##bronze
      | "Silver" => style##silver
      | "Gold" => style##gold
      | "" => style##root
      };
    <div className>
      <h3 className=style##name> (tier.name |> s) </h3>
      <p className=style##amount> (tier.amount |> s) ({j|€|j} |> s) </p>
      <p className=style##description> (tier.description |> s) </p>
    </div>;
  },
};
