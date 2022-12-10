#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a,count=0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 10 == 9)
			count++;
		if (a / 10 == 9)
			count++;
	}
	printf("count=%d\n",count);
	return 0;
}