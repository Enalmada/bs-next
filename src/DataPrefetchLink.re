[@bs.module "data-prefetch-link"] external link: ReasonReact.reactClass = "default";
/*
 let make =
     (
       ~href=?,
       ~_as=?,
       ~prefetch: option(bool)=?,
       ~withData: option(bool)=?,
       ~replace: option(bool)=?,
       ~shallow: option(bool)=?,
       ~passHref: option(bool)=?,
       children,
     ) =>
   ReasonReact.wrapJsForReason(
     ~reactClass=link,
     ~props=
       Js.Undefined.{
         "href": fromOption(href),
         "as": fromOption(_as),
         "prefetch": fromOption(prefetch),
         "withData": fromOption(withData),
         "replace": fromOption(replace),
         "shallow": fromOption(shallow),
         "passHref": fromOption(passHref),
       },
     children,
   );
 */

[@bs.obj]
external makeProps:
  (
    ~href: string=?,
    ~_as: string=?,
    ~prefetch: bool=?,
    ~withData: bool=?,
    ~replace: bool=?,
    ~shallow: bool=?,
    ~passHref: bool=?,
    unit
  ) =>
  _ =
  "";

let make = (~href=?, ~_as=?, ~prefetch=?, ~withData=?, ~replace=?, ~shallow=?, ~passHref=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=link,
    ~props=makeProps(~href?, ~_as?, ~prefetch?, ~withData?, ~replace?, ~shallow?, ~passHref?, ()),
    children,
  );
