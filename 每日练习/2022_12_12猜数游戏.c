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
	int guess;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("������µ���:");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("��С��\n"); 
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int Input;
	srand((unsigned int)(time)(NULL));
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