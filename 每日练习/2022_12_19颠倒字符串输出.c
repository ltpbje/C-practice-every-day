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
	int left = 0;
	int right = is_strlen(arr) - 1;
	while (left < right)
	{
		char temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main(void)
{ 
	char arr[] = "abcdefg";
	reverse_arr(arr);
	printf("%s\n",arr);
	return 0;
}