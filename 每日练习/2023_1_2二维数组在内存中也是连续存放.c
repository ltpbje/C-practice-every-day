#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int arr[][4] = { {1,1},{1,1},{1,1}};
	int i = 0;
	int j = 0;
	int* p = &arr;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", *p);
			p++;
		}
	}
	return 0;
}