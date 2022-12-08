#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int a, b,r;
	scanf("%d%d",&a,&b);
	while (a % b)
	{
		r = a % b;
		a = b;
		b = r;
	}
	printf("%d\n",b);
	return 0;
}