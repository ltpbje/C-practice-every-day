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
	char mine[ROWS][COLS];//布置雷
	char show[ROWS][COLS];//排查雷
	InitBoard(mine, ROWS, COLS, '0');//初始化数组
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
		printf("请选择>>:");
		scanf("%d", &input);
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