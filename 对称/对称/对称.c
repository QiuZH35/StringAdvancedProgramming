
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isit(char* str)//˫ָ��
{
	int flag = 1;
	char* p1 = str;//ͷָ��
	char* p2 = str + strlen(str) - 1;//βָ��
	while (p1 < p2)  //�����
	{
		if (*p1 != *p2)
		{
			flag = 0;
			break;
		}
		p1++;
		p2--;
	}

	return flag;

}



void main()
{
	char str[1024] = "";
	scanf("%s", str);
	printf("%d", isit(str));

	system("pause");
}