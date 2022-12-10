#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int max = arr[0];
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}                                                                                                             
	}
	printf("%d\n",max);
}