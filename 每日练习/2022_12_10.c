#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double sum=0.0;
	int a;
	int flag = 1;
	for (a = 1; a < 100; a++)
	{
		sum += flag*1.0/a;
		flag = -flag;
	}
	printf("%lf\n",sum);
	return 0;
}