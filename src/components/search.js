import React from "react";
import "../css/search.css";

function Search(props) {

    return (
        <div id="searc">
            <div className="ss clearfix">
                <input value="新冠肺炎"/>
                <img src={require("../images/耳机.png")} alt=""/>
            </div>
        </div>
    )
}

export default Search;