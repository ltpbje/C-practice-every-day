#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h> // EOF(=^Z或F6),NULL
#include<stdlib.h> // srand( ) ,rand( ),exit(n)
#include<malloc.h> // malloc( ),alloc( ),realloc( )等
#include<limits.h> // INT_MAX等
#include<string.h>
#include<ctype.h>
#include<math.h> // floor(),ceil( ),abs( )
#include<iostream> // cout,cin
#include<time.h> // clock( )
#define    TRUE          1
#define     FALSE       0 
#define     OK              1
#define     ERROR      0
#define     INFEASIBLE     -1
#define     OVERFLOW     -2 
typedef      int         Status; 
typedef      int   ElemType;
#define  MAXSIZE 100     //最大长度
typedef  struct
{  
	ElemType  *elem;     //指向数据元素的基地址
    int  length;          //线性表的当前长度                                                      
}SqList;
Status InitList_Sq(SqList &L)
{    //构造一个空的顺序表L
    L.elem=new ElemType[MAXSIZE];  //为顺序表分配空间
    if(!L.elem) exit(OVERFLOW);       //存储分配失败
    L.length=0;				 //空表长度为0
    return OK;
};

Status GetElem(SqList L, int i)
{  if (i<1||i>L.length) return ERROR;   
   //判断i值是否合理，若不合理，返回ERROR
   int e;
   e=L.elem[i-1];//第i-1的单元存储着第i个数据
   printf("\n%d\n",e);
   return OK;
};


int LocateELem(SqList L,ElemType e)
{   int i;
	for (i=0;i< L.length;i++)
         if (L.elem[i]==e) return i+1;                
    return 0;
};

Status ListInsert_Sq(SqList &L,int i ,ElemType e)
{   int j;
	if(i<1 || i>L.length+1) return ERROR;	         //i值不合法
    if(L.length==MAXSIZE) return ERROR;    //当前存储空间已满     
    for(j=L.length-1;j>=i-1;j--) 
          L.elem[j+1]=L.elem[j];    //插入位置及之后的元素后移
    L.elem[i-1]=e;                        //将新元素e放入第i个位置
    ++L.length;		     	//表长增1
    return OK;
};
Status print_Sq(SqList L)
{ 
  int i;
  printf("\n线性表表中元素如下： ");
  for(i=0;i<L.length;i++) printf("%d ",L.elem[i]);
  printf("\n");
  return OK;
};


Status create_Sq(SqList &L,int n)
{ int i,e;
  for(i=0;i<n;i++)
     { printf("输入表中元素：");
	   scanf("%d",&e);
       ListInsert_Sq(L,i+1,e);
      }
  return OK;
 };
Status ListDelete_Sq(SqList& L, int i)
{
    int j;
    if ((i < 1) || (i > L.length)) return ERROR;//i值不合法
    int get = L.elem[i - 1];
    for (j = i; j < L.length; j++) {
        L.elem[j - 1] = L.elem[j];
    };
    --L.length; //表长减1
    print_Sq(L);
    printf("\n");
    printf("%d", get);
    return OK;
}
void GetElemFn(SqList L) {
    int i;
    printf("查找那个位置的元素:");
    scanf("%d", &i);
    GetElem(L, i);
};
//（3）插入元素功能
void insertItem(SqList L) {
    int i;
    int x;
    printf("插入数字插入到第几个元素前:");
    scanf("%d", &i);
    printf("\n插入的数字:");
    scanf("%d", &x);
    ListInsert_Sq(L, i, x);
    print_Sq(L);
};
//（4）删除元素功能
void delItem(SqList &L) {
    int del_i;
    printf("删除第几个元素");
    scanf("%d", &del_i);
    ListDelete_Sq(L, del_i);
    /*print_Sq(L);
    printf("\n");
    printf("%d", get);*/
};
//（5）查找指定元素e是否在线性表中存在，若存在返回此元素的位序，否则返回0；
void checkItemFn(SqList L) {
    int checkItem;
    printf("输入要查找的元素:");
    scanf("%d", &checkItem);
    int locateIndex = LocateELem(L, checkItem);
    if (locateIndex) {
        printf("%d\n", locateIndex);
    }
    else {
        printf("找不到该元素\n");
    };
};
void printMenu(int &i) {
    printf("1.创建线性表请输入---1\n2.插入元素请输入---2\n3.删除元素请输入---3\n4.查找元素并返回查找元素位置请输入---4\n5.查找元素并返回查找元素请输入---5\n6.输出线性表中的所有元素请输入---6\n");
    scanf("%d",&i);
};
int main()
{
    SqList L;
    int n;
    int i = 0;
    /*int i;
    int x;
    int del_i;
    int get;*/
    //（1）初始化一个线性表
    InitList_Sq(L);
    printf("输入线性表的表长:");
    scanf("%d", &n);
    create_Sq(L, n);
    print_Sq(L);
    printMenu(i);
    switch (i)
    {
    case 1: //（2）创建一个包含n个正整数值的线性表（线性表的长度n和表中元素的值随机输入）；
        InitList_Sq(L);
        create_Sq(L, n);
        print_Sq(L);
        break;
        //（3）将一个数x插在第i个元素前（x和i在程序运行时输入）
    case 2:
            insertItem(L);
            break;
    case 3:
        //（4）删除第i个元素（i在程序运行时输入），并在删除结束后输出删除元素的值
        delItem(L);
        break;
    case 4:
        //（5）查找指定元素e是否在线性表中存在，若存在返回此元素的位序，否则返回0；
        checkItemFn(L);
        break;
    case 5:
        //（6）查找指定位置元素的值并输出；
        GetElemFn(L);
        break;
    case 6:
        //（7）输出线性表中所有元素。
        print_Sq(L);
        break;
    }
}
