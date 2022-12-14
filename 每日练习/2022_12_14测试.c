#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int is_prime(int a)
{
	int i;
	for (i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int a,n;
	for (a = 100; a <= 200; a++)
	{
		if (is_prime(a) == 1)
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	printf("Î×Ê¦3\n");
	return 0;
}