#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int DigitSum(int num)
{
	int a = num % 10;
	num = num / 10;
	int sum = a;
	if (num != 0) 
	{
		 sum = DigitSum(num) + a;
	}
	return sum;
}
int main(void)
{ 
	int num = 1729;
	int sum = DigitSum(num);
	printf("%d\n",sum);
	return 0;
}