#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("***********1.Play***************\n");
	printf("***********0.Exit***************\n");
	printf("********************************\n");
}
void game()
{
	char mine[ROWS][COLS];//������
	char show[ROWS][COLS];//�Ų���
	InitBoard(mine, ROWS, COLS, '0');//��ʼ������
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	Setmine(mine,ROW,COL);
	DisplayBoard(mine,ROW,COL);
	Findmine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>>:");
		scanf("%d", &input);
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