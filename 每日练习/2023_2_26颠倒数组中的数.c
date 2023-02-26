#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse(int arr[],int sz)
{
	int left = 0, right = sz - 1;
	int temp = 0;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}