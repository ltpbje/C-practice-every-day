#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 10;
	printf("%p\n",&a);
	int *p = &a;
	*p = 20;
	printf("%d\n",a);
	printf("%d\n", *p);
	return 0;
}
