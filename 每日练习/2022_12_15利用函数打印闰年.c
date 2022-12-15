#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int is_leapyear(int year)
{
	if ((year % 4 == 0 && year % 100 == 0) || (year % 400 == 0))
		return 1;
}
int main(void)
{
	int year = 0;
	for (year = 1000; year < 2000; year++)
	{
		if (is_leapyear(year) == 1)
			printf("%d ",year);
	}
	printf("\n");
	return 0;
}