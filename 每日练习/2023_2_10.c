#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun(int input)
{
	if (input % 4 == 0 && input % 100 != 0 || input % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}

int main()
//{
//	float a = 2.0f / 5.0f;
//	printf("%f\n",a);
//	return 0;
//}
//{
//	int a = 2 % 3;
//	printf("a=%d\n",a);
//	return 0;
//}
//{
//	int a = 2;
//	int b = a << 1;//把a的二进制位向左移动一位
//	printf("%d\n",b);
//	return 0;
//}
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n",b);
//	return 0;
//}
//{
//	int a = 2;
//	int b = 1;
//	printf("%d\n",a^b);
//}
//不创建变量来交换两个变量的值
//{
//	int a = 2;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n",a,b);
//}
//{
//	int a = 2;
//	int b = 3;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//}
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n",a);
//	return 0;
//}
{

	int input = 0;
	printf("请输入年份>>:");
	scanf("%d",&input);
	int count=fun(input);
	if (count == 1)
		printf("%d是闰年\n",input);
	if (count == 0)
		printf("%d是平年\n",input);
	return 0;
}