
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//查找第一个没有出现重复字符的字符   "abcdfgabcdgh";    'f'

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
			ch = str[i];  //保存zifu
			break;
		}
		else
		{
			ch = '\0';
		}
	}
	return ch;
}


//先映射，再检索
//char  0-255  256
char findonehash(char* str)
{
	if (str == NULL)
	{
		return '\0';
	}
	char ch = '\0';
	int hashtable[256]={0};//浪费空间节约时间
	char* phash = str;

	
	while (*phash != '\0')
	{
		//*(phash++)  //指针向后移动
		hashtable[*(phash++)]++;   //++计数
		printf("%d\n", hashtable[*(phash++)]++);    //只出现一次的不会增加


	}
	phash = str;//恢复到开头
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