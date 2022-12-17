#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main(void)
{ 
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}