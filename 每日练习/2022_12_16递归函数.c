﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
void print(int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main(void)
{ 
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}