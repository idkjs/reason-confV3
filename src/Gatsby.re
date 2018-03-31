/* binding to gatsby link
   Running into default issue again. Name the bs module inside brackets and get default
   version of the module
   */
module Link = {
  [@bs.module "gatsby-link"]
  external gatsbyLink : ReasonReact.reactClass = "default";
  let make = (~to_: string, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=gatsbyLink,
      ~props={"to": to_},
      children,
    );
};