//辗转相除法 求最小公约数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 4;
	int b = 6;
	int temp;
	scanf("%d %d",&a,&b);
	while (temp = b % a)
	{
		/*temp = b % a;*/
		b = a;
		a = temp;
	}
	printf("%d\n",a);
	return 0;
}