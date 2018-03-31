let component = ReasonReact.statelessComponent("CodeOfConduct")

let make = _children => {
    ...component,
    render: _self => 
    <div>
    <h1>({j|Code of Conduct|j} |> Utils.s)</h1>
    </div>
}

/* set up default.ReasonReact
see: https://reasonml.github.io/reason-react/docs/en/interop.html#reactjs-using-reasonreact
  
The function takes in the labeled reason component you've created, and a function that, 
given the JS props, asks you to call make while passing in the correctly converted
parameters. You'd assign the whole thing to the name default.

This allows Gatsby to use the file.
*/

let default = ReasonReact.wrapJsForReason(~component, (_jsProps) => make([||]));