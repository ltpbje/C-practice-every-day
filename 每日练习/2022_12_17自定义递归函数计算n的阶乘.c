#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main(void)
{ 
	int n = 0;
	scanf("%d",&n);
	int ret = Fac(n);
	printf("ret=%d\n",ret);
	return 0;
}