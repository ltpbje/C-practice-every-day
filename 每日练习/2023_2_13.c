#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int judge(int i)
//{
//	if (i % 3 == 0 && i % 5 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i=15;i<=300;i++) 
//	{
//		int	m=judge(i);
//		if (m == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//void fun(int m)
//{
//	int i = m;
//	int j = 0;
//	int sum = 0;
//	while (i)
//	{
//		i = i / 10;
//		j = j % 10;
//		sum += pow(j,3);
//	}
//	if (sum == i)
//	{
//		printf("是水仙花数\n");
//	}
//	else
//}
//{
//	int i = 0;
//
//	fun(i);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[4] = { 0 };
	scanf("%d",&arr);
	do
	{
		printf("%d%d%d%d", arr[3], arr[2], arr[1], arr[0]);
	} while (strlen(arr)!=4);
	return 0;
}