#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void init(int arr[1])
{
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	init(arr);
	return 0;
}