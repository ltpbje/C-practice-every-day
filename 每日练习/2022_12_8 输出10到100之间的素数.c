#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j, count = 0;
	for (i = 10; i <= 100; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = % d", count);
	return 0;
}
