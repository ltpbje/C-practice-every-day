#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, n,count=0;
	scanf("%d",&n);
	for (a = 1; a <= n; a++)
	{
		for (b = 2; b <= sqrt(a); b++)
		{
			if (a % b == 0)
				break;
		}
		if (b > sqrt(a))
		{
			printf("%d ",a);
			count++;
		}
	}
	printf("\ncount=%d\n",count);
	return 0;
}