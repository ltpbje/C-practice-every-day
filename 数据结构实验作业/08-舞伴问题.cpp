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
#define LENGTH(array) (sizeof(array) / sizeof(array[0]))
#define    TRUE          1
#define     FALSE       0 
#define     OK              1
#define     ERROR      0
#define     INFEASIBLE     -1
#define     OVERFLOW     -2 
typedef      int         Status;
typedef      int   ElemType;
typedef      int   SElemType;
typedef      int   QElemType;
#define  MAXSIZE 100     //最大长度
#define STACK_INIT_SIZE 100 // 存储空间初始分配量
//----------跳舞者个人信息-----------
typedef struct
{
	char name[20];			//姓名
	char sex;				//性别，F表示女性,M表示男性
}Person;
//----------队列的顺序存储结构---------
#define MAXQSIZE 100          //队列可能达到的最大长度
typedef struct			
{
	Person* base;			  //队列中数据元素类型为Person
	int front;				  //头指针
	int rear;				  //尾指针
}SqQueue;
Status InitQueue(SqQueue &Q)
{//构造一个空队列Q
	Q.base = new Person[MAXQSIZE];
	if (!Q.base) exit(OVERFLOW);
	Q.front = Q.rear = 0;
	return OK;
}
Status EnQueue(SqQueue& Q, Person e)
{
	if ((Q.rear + 1) % MAXSIZE == Q.front)
		return ERROR;
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXQSIZE;
	return OK;
};
int QueueEmpty(SqQueue Q)
{
	if (Q.front == Q.rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
};
void DancerPartner(Person dancer[],int num)
{
	SqQueue Mdancers, Fdancers;	 //分别存放男士和女士入队者
	InitQueue(Mdancers);
	InitQueue(Fdancers);
	//结构数组dancer中存放跳舞的男女姓名和性别，num是跳舞的人数
	for (int i = 0; i < num; i++)
	{
		Person p = dancer[i];
		if (p.sex == 'F') EnQueue(Fdancers, p);
		else EnQueue(Mdancers, p);
	};
	printf("The dancing partners are:\n");
	while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers))
	{

	}
};
