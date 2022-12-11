#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j;
	for (i=1;i<=9;i++)//确定打印9行
	{ 
		for (j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}