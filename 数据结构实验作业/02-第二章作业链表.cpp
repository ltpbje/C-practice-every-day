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
//单链表的存储结构
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;
//单链表的初始化
Status InitList(LinkList &L) {
	L = new LNode;
	L->next = NULL;
	return OK;
};
//单链表的创建
void CreateList_R(LinkList& L, int n) {
	L = new LNode;
	L->next = NULL;
	LinkList r = L;
	for (int i = 0; i < n; ++i) {
		LinkList p = new LNode;
		printf("输入元素:");
		scanf("%d", &p->data);
		p->next = NULL;
		r->next = p;
		r = p;
	}
};
//查找元素
LNode* LocateElem(LinkList L, ElemType e) {
	LinkList p = L->next;
	while (p && p->data != e) {
		p = p->next;
	};
	return p;
};
//合并两个有序链表(不允许有重复的元素)
//2 --- (1)
//void mergeLinkList(LinkList &La,LinkList &Lb, LinkList &Lc) {
//		LNode* pa = La->next;
//		LNode* pb = Lb->next;
//		Lc = La;
//		LNode* pc = Lc;
//		while (pa&&pb) {
//			if (pa->data < pb->data) {
//				pc->next = pa;
//				pc = pa;
//				pa = pa->next;
//			}
//			else if (pa->data > pb->data) {
//				pc->next = pb;
//				pc = pb;
//				pb = pb->next;
//			}
//			else {
//				pc->next = pa;
//				pc = pa;
//				pa = pa->next;
//				LNode* q = pb->next;
//				delete pb;
//				pb = q;
//			};
//		};
//		pc->next = pa ? pa : pb;
//		delete Lb;
//};

//合并两个有序链表(保留相同的元素)
//2 -----(2)
//void mergeLinkList(LinkList& La, LinkList& Lb, LinkList& Lc) {
//	LNode* pa = La->next;
//	LNode* pb = Lb->next;
//	Lc = La;
//	LNode* pc = Lc;
//	while (pa && pb) {
//		if (pa->data <= pb->data) {
//			pc->next = pa;
//			pc = pa;
//			pa = pa->next;
//		}
//		else if (pa->data > pb->data) {
//			pc->next = pb;
//			pc = pb;
//			pb = pb->next;
//		}
//	};
//	pc->next = pa ? pa : pb;
//	delete Lb;
//};

//保留两个有序链表中相同的元素
//2----(3)
//void findCommon(LinkList&La,LinkList&Lb) {
//	LNode* pa = La->next;
//	LNode* q;
//	LNode* pb = Lb->next;
//	LinkList Lc = La;
//	LNode* pc = Lc;
//	while (pa&&pb)//只要一条链到尾就跳出 
//	{
//		if (pa->data == pb->data) 
//		{
//			pc->next = pa;
//			pc = pa;
//			pa = pa->next;
//			q = pb;
//			pb = pb->next;
//			delete q;
//		}
//		else if(pa->data < pb->data)
//		{
//			q = pa;
//			pa = pa->next;
//			delete q;
//		}
//		else 
//		{
//			q = pb;
//			pb = pb->next;
//			delete q;
//		}
//	};
//	while (pa)
//	{
//		q = pa;
//		pa = pa->next;
//		delete q;
//	}
//	while (pb)
//	{
//		q = pb;
//		pb = pb->next;
//		delete q;
//	}
//	pc->next = NULL;//把新链尾巴置NULL，一定要有，不然在其他操作中报错
//};
void difference(LinkList& La, LinkList& Lb) {
	LNode* pa = La->next;
	LNode* q;
	LNode* pb = Lb->next;
	LinkList Lc = La;
	LNode* pc = Lc;
	while (pa && pb)//只要一条链到尾就跳出 
	{
		if (pa->data == pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
			q = pb;
			pb = pb->next;
			delete q;
		}
		else if (pa->data < pb->data)
		{
			q = pa;
			pa = pa->next;
			delete q;
		}
		else
		{
			q = pb;
			pb = pb->next;
			delete q;
		}
	}
}
void printLinkList(LinkList L) {
	LNode* p = L->next;
	while (p && p->data) {
		printf("%d ",p->data);
		p = p->next;
	};
	printf("\n");
}
 
int main() {
	LinkList La,Lb,Lc;
	int Na,Nb;
	printf("输入La表的长度");
	scanf("%d", &Na);
	CreateList_R(La, Na);
	printLinkList(La);
	printf("输入Lb表的长度");
	scanf("%d", &Nb);
	CreateList_R(Lb, Nb);
	printLinkList(Lb);
	//(1)(2)合并两个有序链表
	//mergeLinkList(La,Lb,Lc);
	//(3)保留两个有序链表中相同的元素
	//findCommon(La, Lb);
	//(4)

	printLinkList(La);
}
