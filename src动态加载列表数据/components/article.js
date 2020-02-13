import React,{Component} from "react";
import "../css/article.css";
import axios from "axios";

class Article extends Component{
    state = {
        articles:[],        //新闻列表
    }

    componentDidMount(){
        axios.get('http://playground.it266.com/news')

        .then((response)=>{
            this.setState({articles:response.data.articles})
        })
        .catch((error)=>{
            alert("error出错了")
        })
    }

    render(){
        return (
            this.state.articles.map((item) => {
                return(
                    <div id="article">
                        <div className="art-list" key = {item.id}>
                            <div className="text">{item.title}</div>
                            <div>
                                <img src={require("../images/002.jpg")} alt=""/>
                            </div>
                        </div>
                    </div>
                )
            })
        )
    }
}

export default Article;