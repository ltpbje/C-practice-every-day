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
			if (j < col - 1)	
			{
				printf("--| ");
			}
			if(i<row-1)
			printf("--");
		}
	}
}