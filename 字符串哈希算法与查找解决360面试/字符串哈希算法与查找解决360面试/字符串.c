
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//���ҵ�һ��û�г����ظ��ַ����ַ�   "abcdfgabcdgh";    'f'

char findone(char* str)
{
	if (str == NULL)
	{
		return '\0';
	}
	char ch = '\0';
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		int flag = 0;
		for (int j = i + 1; j < length; j++)
		{
			if (str[i] == str[j])
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			ch = str[i];  //����zifu
			break;
		}
		else
		{
			ch = '\0';
		}
	}
	return ch;
}


//��ӳ�䣬�ټ���
//char  0-255  256
char findonehash(char* str)
{
	if (str == NULL)
	{
		return '\0';
	}
	char ch = '\0';
	int hashtable[256]={0};//�˷ѿռ��Լʱ��
	char* phash = str;

	
	while (*phash != '\0')
	{
		//*(phash++)  //ָ������ƶ�
		hashtable[*(phash++)]++;   //++����
		printf("%d\n", hashtable[*(phash++)]++);    //ֻ����һ�εĲ�������


	}
	phash = str;//�ָ�����ͷ
	while (( * phash)!='\0')
	{
		if (hashtable[*phash]==1)
		{
			ch = *phash;
			return ch;
		}

		phash++;
	}
	
}


void main()
{
	char str[20] = "abcdefabcdg";
	putchar(findone(str));
	putchar(findonehash(str));


	system("pause");
}