#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int is_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}
void reverse_arr(char* arr)
{
	char temp = *arr;
	int len = is_strlen(arr);
	*arr = *(arr+len-1);
	*(arr + len - 1) = '\0';
	if (is_strlen(arr+1)>=2)
	{
		reverse_arr(arr+1);
	}
	*(arr + len - 1) = temp;
}
int main(void)
{ 
	char arr[] = "abcdefg";
	reverse_arr(arr);
	printf("%s\n",arr);
	return 0;
}