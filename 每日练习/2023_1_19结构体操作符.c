#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct Book
{
	//�ṹ��ĳ�Ա(����)
	char name[20];
	char ID[20];
	int price;
};
int main()
{
	int num = 0;
	//�ṹ�������.��Ա
	struct Book b = {"C���Գ�����ƻ���","3060307030803090",5};
	struct Book* pb = &b;
	printf("����: %s\n", pb->name);
	printf("���: %s\n", pb->ID);
	printf("�۸�: %d\n", pb->price);

	/*printf("����: %s\n",(*pb).name);
	printf("���: %s\n",(*pb).ID);
	printf("�۸�: %d\n",(*pb).price);*/

	/*printf("����: %s\n",b.name);
	printf("���: %s\n", b.ID);
	printf("�۸�: %d\n", b.price);*/
	return 0;
}