/*定义头文件 加上数据结构 从而实现被引用*/
/*本程序用来写一个通讯录程序，包含两个信息。
(1)姓名 char[9](姓名最多4个字)
(2)手机号(11位)
(3)给每个元素添加一个ID
实现如下功能
浏览 编辑 增加 删除 查找 存盘 功能
*/
#ifndef HEAD_H_
#define HEAD_H_
#include<stdlib.h>
#include<string.h>
#include<stdlib.h>
#include "Status.h"
struct date
{
char name[9];
char telenum[12];
};
typedef struct node
{
    struct date info;
    struct node* next;
}NODE;
typedef NODE* NodeList;
//通讯录浏览
Status view(NodeList L);
//通讯录初始化
Status InitList(NodeList L);
//通讯录的销毁
Status DestroyList(NodeList L);
//通讯录的置空
Status ClearList(NodeList L);
//通讯录判是否为空
Status ListEmpty(NodeList L);
//通讯录长度
int ListLength(NodeList L);
//通讯录的插入
Status ListInsert(NodeList L,char *cname,char *cnum);
#endif