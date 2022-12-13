#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>//strcpyµÄ¿âº¯Êý
#include<time.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "Hello world";
	memset(arr1,'#',5);
	printf("%s\n",arr1);
	return 0;
}