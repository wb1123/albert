import React from "react";
import "../css/article.css";

function Article(props) {

    return (
        <div id="article">
            <div className="art-list">
                <div className="text">
                    新冠肺炎防疫全纪录
                </div>
                <div>
                    <img src={require("../images/002.jpg")} alt=""/>
                </div>
            </div>
        </div>
    )
}

export default Article;