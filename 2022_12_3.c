#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
	char password[20] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("��������:");
		scanf("%s",&password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("����,��������\n");
		}
	}
	if (i == 3)
		printf("�������\n");
	printf("");
	return 0;
}