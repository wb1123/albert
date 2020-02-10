import React from "react";
import "../css/nav.css";

function Nav(props) {

    return (
        <div id="nav">
            <div className="nav-list clearfix">
                <ul>
                    <li className="one">首页</li>
                    <li className="two">推荐</li>
                    <li>限免</li>
                    <li>金融</li>
                    <li>公司</li>
                    <li>宏观</li>
                </ul>
                <span>+</span>
            </div>
        </div>
    )
}

export default Nav;