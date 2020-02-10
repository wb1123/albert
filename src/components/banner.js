import React from "react";
import "../css/banner.css";

function Banner(props) {

    return (
        <div id="banner">
            <div className="banner-list">
                <ul>
                    <li>
                        <img src={require("../images/001.jpg")} alt=""/>
                    </li>
                </ul>
                <div className="round">
                    <ul>
                        <li></li>
                        <li></li>
                        <li></li>
                        <li></li>
                    </ul>
                </div>
            </div>
        </div>
    )
}

export default Banner;