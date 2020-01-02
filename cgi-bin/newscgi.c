#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"

int callback(void *para,int col_count,char **col_value,char **col_name){
    printf("<li><a href='newsskip.cgi?%s'>%s</a></li> \n",col_value[0],col_value[1]);
    return  0;
}

int sel(sqlite3 *db){
    char *sql = "SELECT * FROM news";
    char *err;
    if(0 != sqlite3_exec(db,sql,callback,NULL,&err)){
        printf("%s\n",err);
        exit(-1);
    }
    return 0;
}

int main(){
    printf("Content-Type:text/html\n\n");
    char *header = "<!doctype html>"\
                    "<html>"\
                    "<head>"\
                    "<meta charset='UTF-8'>"\
                    "</head>"\
                    "<body>";
     printf("%s\n",header);
     printf("<style>"
            "a{color:#666;}"\
            "</style>");
    printf("<style>"
            "a{color:black;font-size:20px;text-decoration: none;}"\
            "</style>");
    printf("<style>"
            "ul{width:1200px;height:450px;background-color:yellowgreen;margin: 0 auto;}"\
            "</style>"
                    );
    printf("<style>"
            "li{list-style:none;margin:5px;}"\
            "</style>"
                    );
    printf("<div style='line-height:80px;color:black;background-color:yellow;text-align:center;font-size:30px;'><b>国内新闻</b></div>");
    sqlite3 *db  = NULL;
    int res = sqlite3_open("cms.db",&db);
    if (res != 0)
    {
        printf("open db fail11111\n");
        return -1;
    }
    printf("<ul>");
    sel(db);
    printf("</ul>");

    sqlite3_close(db);
    printf("</body></html>");
    return 0;
}