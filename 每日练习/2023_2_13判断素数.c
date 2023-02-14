#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d",&n);
	int i = 0,a=0;
	for (i = 2; i <=n-1; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i>n-1)
		printf("%d是素数\n", n);
	else
		printf("不是素数\n");
	return 0;
}