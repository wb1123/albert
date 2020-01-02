1.在https://www.sqlite.org/网站下载sqlite文件包

2.解压sqlite-amalgamation-3300100.zip,得到shell.c,sqlite3.c,sqlite3.h,sqlite3ext.h四个文件

3.gcc -c sqlite3.c

4.gcc shell.c sqlite3.o -o sqlite3

5.创建sqlite cms.db数据库

6.创建news表

CREATE TABLE IF NOT EXISTS news(
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    title TEXT,
    content TEXT,
    created_at TEXT
);

INSERT INTO news (title, content, created_at) VALUES ('hello clang','the first news', '2019-12-30');
INSERT INTO news (title, content, created_at) VALUES ('新年快乐','新年快乐新年快乐', '2019-12-30');

7.终端下载apache

8.var-www下,创建cgi-bin文件夹

9.etc-apache2-(conf-available)-(serve-cgi-bin.conf),将地址改成www下cgi-bin的地址

10.在apache2下打开终端,运行三条代码:

①ln -s /etc/apache2/mods-available/cgid.conf /etc/apache2/mods-enabled/cgid.conf

② ln -s /etc/apache2/mods-available/cgid.load /etc/apache2/mods-enabled/cgid.load

③ ln -s /etc/apache2/mods-available/cgi.load /etc/apache2/mods-enabled/cgi.load

11.重启apache

12.创建一个增删改查的news.c的sq库

13.在cgi-bin目录下创建一个newscgi.c的文件,然后把newscgi.c文件编译成newscgi.cgi文件

14.再创建一个newsskip.c的跳转文件,把newsskip.c文件编译成newsskip.cgi文件

15.用浏览器打开newscgi.cgi文件