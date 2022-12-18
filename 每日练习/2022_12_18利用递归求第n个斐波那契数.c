#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n-1)+Fib(n-2);
}
int main(void)
{ 
	int n = 0;
	scanf("%d",&n);
	int fib = Fib(n);
	printf("%d\n",fib);
	return 0;
}