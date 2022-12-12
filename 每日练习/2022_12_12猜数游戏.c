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
	int guess;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("输入你猜的数:");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n"); 
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
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