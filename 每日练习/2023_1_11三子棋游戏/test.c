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
	//�����ά����
	char board[ROW][COL];
	//��ʼ����ά����
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
		printf("���ʤ\n");
	else if (ret == '#')
		printf("����ʤ\n");
	else if(ret=='Q')
		printf("ƽ��\n");
	DisplayBoard(board, ROW, COL); 
}   
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
