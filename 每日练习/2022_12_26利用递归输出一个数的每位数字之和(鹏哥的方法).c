#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int DigitSum(int num)
{
	if (num > 9)
		return DigitSum(num / 10) + (num % 10);
	else
		return num;
}
int main(void)
{ 
	int num = 1729;
	int sum = DigitSum(num);
	printf("%d\n",sum);
	return 0;
}