#include <stdio.h>
#include <stdlib.h>

struct member
{
    char num[20];              //编号
    char name[20];          //姓名
    char sex[4];                  //性别 
    int age;                          //年龄
    int tel;                            //电话
}members[100];

int main()                            //主函数
{
    int a = 1;
    while(1)
    {
        if(a >= 0 && a <= 6)
        {
            printf("会员信息管理系统\n");
            printf("1.新增会员\n");
            printf("2.查看会员\n");
            printf("3.修改会员\n");
            printf("4.删除会员\n");
            printf("5.全部会员\n");
            printf("0.退出\n");

            printf("请选择: ");
            scanf("%d",&a);

            switch(a)
            {
                case 1:
                    add();
                    break;
                case 2:
                    find();
                    break;
                case 3:
                    amend();
                    break;
                case 4:
                    Delete();
                    break;
                case 5:
                    all();
                    break;
                case 0:
                    exit(0);
                    break;
            }
        }
        else
        {
            printf("您输入的不符合要求,请输入符合要求的数字返回主菜单!");
            scanf("%d",&a);
        }
    }
}

void add()                          //添加
{
    int n = 0;
    printf("请输入会员信息:\n编号: ");
    scanf("%s",members[n].num);
    printf("姓名: ");
    scanf("%s",members[n].name);
    printf("性别: ");
    scanf("%s",members[n].sex);
    printf("年龄: ");
    scanf("%d",&members[n].age);
    printf("电话: ");
    scanf("%d",&members[n].tel);
    n++;

    printf("\n您输入的信息已被保存!\n");
}

void find()                         //查找
{
    void find1();
    void find2();
    int a;
    printf("1.按姓名查找\n2.按编号查找\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            find1();
            break;
        case 2:
            find2();
            break;
    }
}

void find1()
{
    int i;
    int n = 0;
    char a[20];
    printf("按姓名查找:\n");
    scanf("%s",a);
    for(i = 0;i < n;i++)
    {
        if(strcmp(a,members[i].name) == 0)
        {
            printf("\n%s\t",members[i].name);
            printf("%s\t",members[i].num);
            printf("%s\t",members[i].sex);
            printf("%d\t",members[i].age);
            printf("%d\t",members[i].tel);
            printf("\n");
        }
    }
}

void find2()
{
    int i;
    int n = 0;
    char a[20];
    printf("按编号查找:\n");
    scanf("%s",a);
    for(i = 0;i < n;i++)
    {
        if(strcmp(a,members[i].num) == 0)
        {
            printf("%s\t",members[i].name);
            printf("%s\t",members[i].num);
            printf("%s\t",members[i].sex);
            printf("%d\t",members[i].age);
            printf("%d\t",members[i].tel);
            printf("\n");
        }
    }
}

void amend()                       //修改
{  
     {
        int i,j,o;
        int n = 0;
        char a[20];
        printf("修改会员的编号: ");
        scanf("%s",a);
        printf("\n");
        for(i = 0;i < n;i++)
        {
            if (strcmp(a,members[i].num) == 0)
            {
                printf("编号:%s\n",members[i].num);
                printf("姓名:%s\n",members[i].name);
                printf("性别:%s\n",members[i].sex);
                printf("年龄:%d\n",members[i].age);
                printf("电话:%d\n",members[i].tel);
                o = i;
            }
        }
        printf("1.修改编号\n2.修改姓名\n3.修改性别\n4.修改年龄\n5.修改电话\n请选择: ");
        scanf("%d",&j);
        switch(j)
        {
            case 1:
                printf("编号修改为: ");
                scanf("%s",members[o].num);
                break;
            case 2:
                printf("姓名修改为: ");
                scanf("%s",members[o].name);
                break;
            case 3:
                printf("性别修改为: ");
                scanf("%s",members[o].sex);
                break;
            case 4:
                printf("年龄修改为: ");
                scanf("%d",&members[o].age);
                break;
            case 5:
                printf("电话修改为: ");
                scanf("%d",&members[o].tel);
                break;
        }
        printf("\n修改成功!\n");
     }
}

void Delete()                           //删除
{
    int i;
    int n = 0;
    char a[20];
    printf("请输入要删除的编号:");
    scanf("%s",a);
    for(i = 0;i < n;i++)
    {
        if(strcmp(a,members[i].num) == 0)
        {
            while(i < n)
            {
                members[i] = members[i + 1];
                i++;
            }
            n -= 1;
        }
    }
}

void all()                          //显示全部
{
    int i;
    printf("姓名\t编号\t性别\t年龄\t电话\n");
    for(i = 0;i < 20;i++)
    {
        printf("%s\t",members[i].name);
        printf("%s\t",members[i].num);
        printf("%s\t",members[i].sex);
        printf("%d\t",members[i].age);
        printf("%d\t",members[i].tel);
        printf("\n");
    }
    printf("\n信息全部显示完毕!\n");
}