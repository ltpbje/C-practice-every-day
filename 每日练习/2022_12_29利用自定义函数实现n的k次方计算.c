#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
double Pow(int n,int k)
{
	int i = 1;
	int sum = 1;
	if (k == 0)
		return 1.0;
	else if (k > 0)
	{
		
		return n*Pow(n,k-1);
	}
	else if (k < 0)
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main(void)
{ 
	int n, k;
	scanf("%d%d",&n,&k);
	double ret = Pow(n,k);
	printf("%lf\n",ret);
	return 0;
}