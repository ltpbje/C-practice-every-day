#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n=0,b=0,a=1;
//	scanf("%d",&n);
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		a *= i;
//		b += a;
//	}
//	printf("%d\n", a);
//	printf("%d", b);
//}
#include<stdio.h>
int main()
{
	int n ,i= 0,a=1,b=0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		a=a*i;
		b += a;
	}
	printf("%d\n",b);
	return 0;
}