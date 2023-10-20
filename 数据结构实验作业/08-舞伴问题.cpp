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
Status InitQueue(SqQueue& Q)
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
Status DeQueue(SqQueue& Q, Person& e)
{//删除Q的队头元素,用e返回其值
	if (Q.front == Q.rear) return ERROR;  //队空
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXSIZE;
	return OK;
}

Person GetHead(SqQueue Q) 
{	
	if (Q.front != Q.rear)
		return Q.base[Q.front];
}
void DancePartner(Person dancer[], int num)
{
	int n = 0;
	printf("要进行的轮数:");
	scanf("%d",&n);
	SqQueue Mdancers, Fdancers;	 //分别存放男士和女士入队者
	InitQueue(Mdancers);
	InitQueue(Fdancers);
	Person p;
	for(int j =0;j<n;j++)
	{
		printf("-------第%d轮--------\n",j+1);
		//结构数组dancer中存放跳舞的男女姓名和性别，num是跳舞的人数
		for (int i = 0; i < num; i++)
		{
			p = dancer[i];
			if (p.sex == 'F') EnQueue(Fdancers, p);
			else EnQueue(Mdancers, p);
		};
		printf("舞伴是:\n");
		while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers))
		{
			DeQueue(Fdancers, p); //女性出队
			printf("%s ", p.name);//输出女性的姓名
			DeQueue(Mdancers, p); //男性出队
			printf("%s\n", p.name);//输出男性的姓名
		};
		if (!QueueEmpty(Fdancers))
		{
			p = GetHead(Fdancers);
			printf("第一个得到舞伴的女性: %s\n\n", p.name);
		}
		else if (!QueueEmpty(Mdancers))
		{
			p = GetHead(Mdancers);
			printf("第一个得到舞伴的男性: %s\n\n", p.name);
		}
	}
};
int main() {
	Person dancer[MAXSIZE]; int i, num;
	printf("请输入跳舞总人数：");
	scanf("%d", &num);
	printf("请输入各个跳舞人的姓名和性别（'F'表示女性，'M'表示男性）：\n");
	for (i = 0; i < num; i++)
	{
		printf("请输入第%d个跳舞人的姓名和性别（用空格隔开）：", i + 1);
		scanf("%s %c", &dancer[i].name, &dancer[i].sex);
	};
	
	DancePartner(dancer, num);
	return 0;
}



