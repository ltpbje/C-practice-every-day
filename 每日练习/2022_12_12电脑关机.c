#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���һ���Ӻ�ػ�,���������������ȡ���ػ�\n������:>");
	scanf("%s",input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
		goto again;
	return 0;
}