#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void init(int arr[1],int sz)
{
	int i = 0;
	for (i = 0; i <sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[1],int sz)
{
	int i = 0;
	for (i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print(arr,sz);
	return 0;
}