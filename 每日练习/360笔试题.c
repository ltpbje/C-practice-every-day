#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//i=a++||++b||d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
	return 0;
}