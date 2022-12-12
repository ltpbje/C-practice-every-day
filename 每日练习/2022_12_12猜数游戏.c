#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*********************************\n");
	printf("***  1.进行游戏  0.退出游戏    ***\n");
}
void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("%d\n",ret);
}
int main()
{
	int Input;
	srand(time);
	do
	{
		menu();//菜单
		printf("你的选择:");
		scanf("%d",&Input);
		switch (Input)
		{
		case 1:
			game();//猜数游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			break;
		}
	} while (Input);
	return 0;
}