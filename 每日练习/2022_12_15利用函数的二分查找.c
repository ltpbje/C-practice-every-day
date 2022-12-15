#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else 
		{
			return mid;
		}
	}
	return 0;
}
int main(void)
{ 
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 5;
	int sz;
	sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if (ret!=0)
		printf("找到了下标为%d\n",ret);
	else if (ret == 0)
		printf("找不到\n");
	return 0;
}