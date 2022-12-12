#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟后关机,如果输入我是猪则取消关机\n请输入:>");
	scanf("%s",input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;
	return 0;
}