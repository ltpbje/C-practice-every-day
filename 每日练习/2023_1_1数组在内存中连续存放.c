#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int arr1[10] = {0,1,2,3,4,5,6,7,8,9};
	int* p = arr1;//arr1是数组的首地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*p);
		p++;
	}
	printf("\n");
	return 0;
}