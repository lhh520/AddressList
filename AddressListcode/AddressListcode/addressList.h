#include"head.h"
#include<iostream>
#include <cstring>
using namespace std;
//通讯录初始化
Status InitList(NodeList L)
{   int  index1=9,i=0,index2=12;
   char name1[9]={'n','a','m','e','h','e','r','e','L'};
   char addre[12]={'a','d','d','r','e','s','s','i','s','h','e','r'};
printf("InitList\n");
L=(NodeList)malloc(sizeof(NODE));
if(L==NULL)
exit(OVERFLOW);
for(i=0;i<index1;i++)
{
    L->info.name[i]=name1[i];
}
for(i=0;i<index2;i++)
{
    L->info.telenum[i]=addre[i];
}
 cout<<(L->info.name)<<endl;
 cout<<(L->info.telenum)<<endl;
L->next=NULL;
return OK;
}
//通讯录的销毁
Status DestroyList(NodeList L)
{
    NodeList p;
    if(L==NULL||&L==NULL)
    return ERROR;
    p=L;
    while(p!=NULL)
    {
        p=L->next;
        free(L);
        L=p;

    }
    L=NULL;
    return OK;
}
//通讯录的置空
Status ClearList(NodeList L)
{
    NodeList p,pre;
    if(L==NULL||&L==NULL)
    return ERROR;
    p=L->next;
    while(p!=NULL)
    {
        pre=p;
        p=p->next;
        free(pre);

    }
    L->next=NULL;
    return OK;
}
//通讯录判是否为空
Status ListEmpty(NodeList L)
{
    if(L!=NULL&&L->next!=NULL)
    return TRUE;
    else
    {
        return FALSE;
    }
    
}
//通讯录长度
int ListLength(NodeList L)
{
    NodeList p;
    int i=0;
    if(L==NULL||L->next==NULL)
    return 0;
    p=L->next;
    while(p!=NULL)
    {
        i++;
        p=p->next;
    }
    
    return i;
}
//通讯录的插入
Status ListInsert(NodeList L,char *cname,char *cnum)
{
 NodeList p,pre;
 int index=0;
 p=(NodeList)malloc(sizeof(NODE));
 p->next=NULL;
//pre=(NodeList)malloc(sizeof(NODE));
//pre->next=NULL;
pre=L->next;
 while(cname[index]!='\0')
 {
     p->info.name[index]=cname[index];
     index++;
 }
 cout<<p->info.name<<endl;
 index=0;
 while(cnum[index]!='\0')
 {
     p->info.telenum[index]=cnum[index];
     index++;
 }
 //
if(pre)
{
    while(pre)
    {pre=pre->next;}
    pre->next=p;
}

 /*
 else
 {
    while(pre->next!=NULL)
    pre=pre->next;
    pre->next=p;
 }*/
 

 return OK;
}
Status view(NodeList L)
{
    NodeList p;
    //char str1[9],str2[12];
    if(L==NULL &&L->next==NULL)
    return ERROR;
    p=L;
    while(p!=NULL)
    {
       cout<<(p->info.name)<<":  "<<(p->info.telenum)<<endl;
       p=p->next;
    }
    return OK;
}
Status LocateList(NodeList L,char *cname)
{   NodeList p=L;
    int index=0,j=0;
    
    if(L==NULL&&L->next==NULL)
    {
        return 0;
    }

  /*  while(cname[index]!='\0')
 {
     p->info.name[index]=cname[index];
     index++;
 }*/
while(cname[j]!='\0')
{
j++;
}
 while(p!=NULL)
{
while(cname[index]!='\0'&&p->info.name[index]!='\0')
{
    if(cname[index]==p->info.name[index])
    {
        index++;
    }
}
if(index==j)

cout<<"The phone number of "<<cname<<":  "<<p->info.telenum;
else
{
    return ERROR;
}

}
return OK;
}
