#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a = 1;
	printf("%u\n",sizeof(a));
	printf("%u\n", sizeof(+a));
	printf("%u\n", sizeof(!a));
	return 0;
}