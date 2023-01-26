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
	char mine[ROWS][COLS] = 0;//布置雷
	char show[ROWS][COLS] = 0;//排查雷
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(mine,ROWS,COLS);
	DisplayBoard(show,ROWS,COLS);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>>:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误,重新输入\n");
			break;
		}
	} while (input);
	return 0;
}