#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 0x11223344;
	char* pa = &a;
	int* pb = &a;
	double* pc = &a;
	/**pa = 0;
	*pb = 0;
	*pc = 0;*/
	printf("%p\n", pa + 1);
	printf("%p\n", pb + 1);
	printf("%p\n", pc + 1);
	return 0;
}