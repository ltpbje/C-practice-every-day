#define _CRT_SECURE_NO_WARNINGS
#define MID 20
#define AMD MID+10
#include<stdio.h>
int main()
{
	int x = 0;
	x = MID * AMD;
	printf("%d\n",x);
	return 0;
}