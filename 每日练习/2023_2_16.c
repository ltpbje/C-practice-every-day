#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 13;
	//01101
	//将a二进制中的第五位变为1
	printf("%d\n",a|(1<<4));//29
	//11101
	//01111
	//将a二进制中的第五位变为0
	printf("%d\n",a & ~(1<<4));//13
	return 0;
}