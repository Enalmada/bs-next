# bs-next-alt

[Reason](https://reasonml.github.io) v5 bindings for
[Next.js](https://github.com/zeit/next.js) v6.

## API

Bindings for native Next.js components:

* [`Next.Head`](https://github.com/zeit/next.js/#populating-head)
* [`Next.Link`](https://github.com/zeit/next.js/#with-link)

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

Bindings for data-prefetch-next which extends Next.Link:

```reason
      <DataPrefetchLink href="/about" prefetch=true withData=true >
        <a> (ReasonReact.stringToElement("About")) </a>
      </DataPrefetchLink>
```
