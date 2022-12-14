#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* a,int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(void)
{
	int a = 10;
	int b = 20;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
}