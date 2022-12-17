#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int my_strlen(char* arr)
{
	if (*arr != '\0')
	{
		return (1 + my_strlen(arr+1));
	}
	else
		return 0;
}
int main(void)
{ 
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}