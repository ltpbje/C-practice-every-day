#include<stdio.h>
void Func(int b[])
{
	int j;
	for (j = 0; j < 4; j++)
	{
		b[j] = j;
	}
}
int main()
{
	static int a[] = { 5,6,7,8 }, i;
	Func(a);
	for (i = 0; i < 4; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
