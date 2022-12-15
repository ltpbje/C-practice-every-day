#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int add(int* num)
{
	(*num)++;
}
int main(void)
{ 
	int num = 0;
	add(&num);
	printf("%d\n",num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n", num);
	return 0;
}