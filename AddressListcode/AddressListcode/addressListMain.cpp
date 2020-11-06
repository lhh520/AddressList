#include"addressList.h"
#include<iostream>
using namespace std;
int main()
{
  NODE L;
   int op;
   char name[9];
   char telenum[12];
    int ListInserttOK;
   cout << "520\n"<< endl ;
   int InitListOK=InitList(&L);
   /*while(1)
   {
      cout<<"Enter your name and phone number"<<endl;
      cin.get(name,9);//名字可能有空格 因此需要使用cin.get（）接收空格
      cin>>telenum;//手机号没有空格 只需要用cin即可
      cout<<name<<endl;
      cout<<telenum<<endl;
      ListInserttOK=ListInsert(&L,name,telenum);
      if(ListInserttOK==1)
      {cout<<"Whether to continue typing<y/n>?"<<endl;}
      else
      {
          cout<<"Input failure!"<<endl;
      }
      
      if(cin.get()=='n')
      break;
   }*/
   //int ViewistOK=view(&L);
   return 0;
}