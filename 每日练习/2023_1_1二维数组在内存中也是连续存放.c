#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int arr[][4] = { {1,1},{1,1},{1,1}};
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("&arr[%d][%d]a=%p\n ",i,j,&arr[i][j]);
	}
	return 0;
}