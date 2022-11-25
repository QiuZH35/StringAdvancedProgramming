
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

char* timefastzip(char *str)
{
	int length = strlen(str); //获取字符长度
	char* newstr =(char *)calloc(length + 1, 1);//分配内存
	 
	char* p = str;
	char* newp = newstr;

	while (*p != '\0')
	{
		char* pis = p;//备份当前指针
		char ch = *pis;//当前字符
		int strlenth = 0;
		while ((*pis) == (*(pis + 1))) //如果相等
		{
			pis++;//指针移动
			strlenth++;//计数
		}
		if (strlenth == 0) //不重复的字符直接拷贝到newp
		{
			*newp++ = *p++;
		}
		else
		{
			*newp = strlenth + 1 + '0';//转化为字符,有一个字符跟他后面的相比，所以要加上那个字符
			*(newp + 1) = *p;//保存相同的一个字符
			newp += 2;//跳过已保存的两个元素
			p += strlenth + 1;//指针往前移动
		}
	}
	length = strlen(newstr);//新的长度

	newstr = _recalloc(newstr, length + 1, 1);//压缩空间
	return newstr;
}


char* timefastunzip(char *str)
{
	char* newstr = calloc(10000, 1);//分配缓冲区
	
	char* p = str;
	char* newp = newstr; //备份
	while (*p != '\0')
	{

		char* pis = p;
		if (*pis >= '0' && *pis <= '9')
		{
			int length = *pis - '0';//获取重复的长度
			for (int i = 0; i < length; i++)
			{
				*newp++ = *(pis + 1);//拷贝字符
			}
			p += 2;//跳过压缩的空间，指针下移
		}
		else
		{
			*newp++ = *p++;

		}

	}
	int length = strlen(newstr); //新的长度

	newstr = _recalloc(newstr, length + 1, 1);//压缩空间


	return newstr;
}



void main2()
{
	char str[1024] = "aaaaaabbbbbbhaihualovefangfanggoooooooooppsssoollsss";
	//6a 6b haihualovefangfangg 9o
	printf("-- %s --\n", str);
	printf("-- %s --\n", timefastzip(str));
	printf("-- %s --\n", timefastunzip(str));


	system("pause");
}