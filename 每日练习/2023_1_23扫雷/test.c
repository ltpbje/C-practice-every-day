#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void menu()
{
	printf("********************************\n");
	printf("***********1.Play***************\n");
	printf("***********0.Exit***************\n");
	printf("********************************\n");
}
void game()
{
	char mine[11][11] = 0;
	char show[11][11] = 0;
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������,��������\n");
			break;
		}
	} while (input);
	return 0;
}