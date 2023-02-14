#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[4] = { '0' };
	do
	{
		gets(arr);
		printf("%c%c%c%c", arr[3], arr[2], arr[1], arr[0]);
	} while (strlen(arr) != 4);
	return 0;
}