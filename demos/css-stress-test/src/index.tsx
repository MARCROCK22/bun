import { Main } from "./main";
import classNames from "classnames";
import * as ReactDOM from "react-dom";

const Base = ({}) => {
  const name =
    typeof location !== "undefined"
      ? decodeURIComponent(location.search.substring(1))
      : null;
  return <Main productName={name || "Bundler"} />;
};

function startReact() {
  ReactDOM.render(<Base />, document.querySelector("#reactroot"));
}

if (typeof window !== "undefined") {
  console.log("HERE!!");
  globalThis.addEventListener("DOMContentLoaded", () => {
    startReact();
  });

  startReact();
} else {
  console.log(ReactDOMServer.renderToString(<Base />));
}

export { Base };


