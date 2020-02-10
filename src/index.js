import React from "react";
import {render} from "react-dom";
import "./css/index.css";
//自定义组件
import Search from "./components/search.js";
import Nav from "./components/nav.js";
import Banner from "./components/banner.js";
import Article from "./components/article.js";
import Tabbar from "./components/tabbar.js";
let App = (
 <div>
    {/* 搜索 */}
    <Search></Search>
    {/* 分类导航 */}
    <Nav></Nav>
    {/* 幻灯片 */}
    <Banner></Banner>
    {/* 文章列表 */}
    <Article></Article>
    <Article></Article>
    <Article></Article>
    {/* 底部导航 */}
    <Tabbar></Tabbar>
 </div> )
render(App, document.getElementById("root"));