#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int judge(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int count = 0;
	int i = 0;
	for (i=15;i<=300;i++) 
	{
		int	m=judge(i);
		if (m == 1)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}