import React from "react";
import "../css/tabbar.css";

function Tabbar(props) {

    return (
        <div id="tabbar">
            <div className="tab">
                <ul>
                    <li>
                        <img className="pic1" src={require("../images/新闻.png")} alt=""/>
                        <div className="one">要闻</div>
                    </li>
                    <li>
                        <img src={require("../images/书.png")} alt=""/>
                        <div>周刊</div>
                    </li>
                    <li>
                        <img src={require("../images/五角星.png")} alt=""/>
                        <div>特供</div>
                    </li>
                    <li>
                        <img src={require("../images/数据.png")} alt=""/>
                        <div>数据通</div>
                    </li>
                    <li>
                        <img src={require("../images/我的.png")} alt=""/>
                        <div>我的</div>
                    </li>
                </ul>
            </div>
        </div>
    )
}

export default Tabbar;