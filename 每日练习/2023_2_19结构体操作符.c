#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct Book
{
	//结构体的成员(变量)
	char name[20];
	char ID[20];
	int price;
};
int main()
{
	int num = 0;
	//结构体变量名.成员
	struct Book b = {"C语言程序设计基础","3060307030803090",5};
	struct Book* pb = &b;
	printf("书名: %s\n", pb->name);
	printf("书号: %s\n", pb->ID);
	printf("价格: %d\n", pb->price);

	/*printf("书名: %s\n",(*pb).name);
	printf("书号: %s\n",(*pb).ID);
	printf("价格: %d\n",(*pb).price);*/

	/*printf("书名: %s\n",b.name);
	printf("书号: %s\n", b.ID);
	printf("价格: %d\n", b.price);*/
	return 0;
}
