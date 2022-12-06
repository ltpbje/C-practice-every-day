#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	int b;
	int r;
	scanf("%d %d",&a,&b);
	while (a % b)
	{
		r = a % b;
		b = a;
		a = r;
	}
	printf("%d",a);
	return 0;
}