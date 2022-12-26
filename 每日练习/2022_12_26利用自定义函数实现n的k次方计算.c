#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int Pow(int n,int k)
{
	int i = 1;
	int sum = 1;
	for (i = 1; i <= k; i++)
	{
		sum *= n;
	}
	return sum;
}
int main(void)
{ 
	int n, k;
	scanf("%d%d",&n,&k);
	int ret = Pow(n,k);
	printf("%d\n",ret);
	return 0;
}