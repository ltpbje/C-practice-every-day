#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>//strcpyµÄ¿âº¯Êý
#include<time.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "world";
	char arr2[20] = "#########";
	strcpy(arr2,arr1);//strcpy ×Ö·û´®¿½±´
	// strenlen - string length - ×Ö·û´®³¤¶È
	printf("%s\n",arr2);
	return 0;
}