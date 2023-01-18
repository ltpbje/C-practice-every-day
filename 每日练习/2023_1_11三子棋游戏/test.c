#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("********1.play***********\n");
	printf("********0.exit***********\n");
	printf("*************************\n");
}
void game()
{
	char ret = 0;
	//储存二维数组
	char board[ROW][COL];
	//初始化二维数组
	Initboard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		isWin(board, ROW, COL);
		ret= isWin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		isWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("玩家胜\n");
	else if (ret == '#')
		printf("电脑胜\n");
	else if(ret=='Q')
		printf("平局\n");
	DisplayBoard(board, ROW, COL); 
}   
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
