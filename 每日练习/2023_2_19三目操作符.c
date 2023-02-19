#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 2;
	int b = 0;
	int max = (a>b?a:b);
	printf("max=%d",max);
	return 0;
}
