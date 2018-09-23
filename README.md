# bs-next-alt

[Reason](https://reasonml.github.io) v5 bindings for
[Next.js](https://github.com/zeit/next.js) v6.

## API

Bindings are provided for the only two components provided by Next.js:

* [`Next.Head`](https://github.com/zeit/next.js/tree/6.0.3#populating-head)
* [`Next.Link`](https://github.com/zeit/next.js/tree/6.0.3#with-link)

## Example

```reason
let component = ReasonReact.statelessComponent("Index");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <Next.Head>
        <title> (ReasonReact.stringToElement("My Page Title")) </title>
      </Next.Head>

      <Next.Link href="/about">
        <a> (ReasonReact.stringToElement("About")) </a>
      </Next.Link>
    </div>
}
```

Bindings also provided for the only two components provided by Next.js:

* [`NextSeo`](https://github.com/garmeeh/next-seo#readme)

```

[@bs.deriving abstract]
type nextSeoConfig = {
  canonical: string,
  title: string
};

let config = nextSeoConfig(~canonical="https://www.gell.com", ~title="About")


let make = _children => {
  ...component,
  render: _self =>
    <Fragment>
        <NextSeo config={config} />
      /* <ReactHelmet> <title> {ReasonReact.string("AboutPage")} </title> </ReactHelmet> */
      <ConsumerPage> <p> {ReasonReact.string("BS Index here")} </p> <Counter /> </ConsumerPage>
    </Fragment>,
};
```
