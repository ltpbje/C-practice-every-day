#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char arr, int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col-1; j++)
		{
			arr[i][j] = ' |';
		}
	}
	printf("");
}
void DisplayBoard(int board,int row,int col)
{

}