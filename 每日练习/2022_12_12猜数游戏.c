#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*********************************\n");
	printf("***  1.������Ϸ  0.�˳���Ϸ    ***\n");
}
void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("%d\n",ret);
}
int main()
{
	int Input;
	srand(time);
	do
	{
		menu();//�˵�
		printf("���ѡ��:");
		scanf("%d",&Input);
		switch (Input)
		{
		case 1:
			game();//������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}
	} while (Input);
	return 0;
}