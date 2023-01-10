#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col-1; j++)
		{
			board[i][j] = ' ';
		}
	}
	
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{	
			printf("%c", board[i][j]);
			if(j < col - 1)
			printf("  |");
		}
		printf("\n");
		if (i < row - 1)
		{
			j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请选择所下位置>:");
	scanf("%d %d",&x,&y);
	while (1)
	{
		if (x<=row&&y<=col&&x>=1&&y>=1)
		{
			if (board[x - 1][y - 1] != " ")
			{
				board[x - 1][y - 1] = "*";
				break;
			}
			else
			{
				printf("被占用了,重新输入>");
			}
		}
		else
		{
			printf("选择错误,重新选择》");
		}
	}
}
