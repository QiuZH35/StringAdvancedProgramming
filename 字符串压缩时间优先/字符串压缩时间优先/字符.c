
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>


char* timefastzip1(char* str)
{
	int lengthstr = strlen(str);//获取字符串长度
	char* newstr = (char*)calloc(lengthstr + 1, 1);//开辟内存

	char* p = str;
	char* newp = newstr;//备份
	while (*p != '\0')
	{
		char* pis = p;//备份当前指针
		char ch = *pis;//当前字符
		int length=0;
		while ((*pis) == (*(pis + 1))) //处理相等的字符
		{
			pis++;
			length++;//计数
		}
		if (length == 0) //不重复直接赋值
		{
			*newp++ = *p++;
		}
		else
		{
			*newp = length + 1 + '0';//加1是因为他跟后面以为比较，不同
			*(newp + 1) = ch;
			newp += 2;
			p += length + 1;
		}
		



	}
	lengthstr = strlen(newstr);
	newstr = _recalloc(newstr, lengthstr + 1, 1);

	return newstr;
}


char* unzip(char* str)
{
	char* newstr = calloc(1000, 1);//缓冲空间

	char* p = str;//备份
	char* newp = newstr;
	while (*p != '\0')
	{

		if (*p >= '0' && *p <= '9')//处理数字
		{
			int length = *p - '0';
			for (int i = 0; i < length; i++)
			{
				*newp++ = *(p + 1);
			}
			p += 2;//跳过压缩字符的长度

		}
		else
		{
			*newp++ = *p++;
		}

	}
	int length = strlen(newstr);
	newstr = _recalloc(newstr, length + 1, 1);



	return newstr;
}



char* newzipp(char* str);
char* newzip(char* str);
char* newunzip(char* str);
char* unzipnew(char* str);
void main()
{
	char str[1024] = "aaaaaabbbbbbhaihualovefangfanggoooooooooppsssoollsss";
	printf("-- %s --\n", str);
	printf("-- %s --\n", newzipp(str));
	printf("-- %s --\n", unzipnew(str));
	system("pause");
}

char* newzip(char* str)
{
	int lengthstr = strlen(str);//获取字符串长度
	char* newstr = calloc(lengthstr + 1, 1);//开辟空间


	char* p = str;
	char* newp = newstr;//备份

	while (*p != '\0')
	{
		char* ps = p;//获取当前地址,获取p的最新地址，查找
		char ch = *p;//获取当前字符
		int length = 0;
		while (*(ps) == *(ps+1))  //相同字符
		{
			ps++;
			length++;//计数

		}
		if (length == 0)//不相同直接拷贝
		{
			*newp++ = *p++;

		}
		else
		{
			*newp = length + 1 + '0';//转化为字符
			*(newp + 1) = ch;
			newp += 2;
			p += length + 1;
		}



	}

	lengthstr = strlen(newstr);
	newstr = _recalloc(newstr, lengthstr + 1, 1);


	return newstr;
}

char* newunzip(char* str)
{
	char* newstr = calloc(1000, 1);//缓冲空间
	char* p = str;
	char* newp = newstr;//备份
	while (*p != '\0')
	{

		if (*p >= '0' && *p <= '9')
		{
			int lengthstr = *p - '0';
			for (int i = 0; i < lengthstr; i++)
			{
				*newp++ = *(p + 1);

			}
			p += 2;//跳过压缩字符长度
		}
		else
		{
			*newp++ = *p++;
		}





	}
	int length = strlen(newstr);
	newstr = _recalloc(newstr, length + 1, 1);

	return newstr;


}


char* newzipp(char* str)
{
	int lengthstr = strlen(str);//计算长度
	char* newstr = calloc(lengthstr + 1, 1);

	char* p = str;//
	char* newp = newstr;//备份
	while (*p != '\0')
	{
		char* ps = p;//获取最新的地址
		char ch = *ps;//获取字符
		int length = 0;
		while (*(ps) == *(ps + 1))//处理相同的字符
		{
			ps++; //指针后移
			length++; //计数
		}
		if (length == 0)
		{
			*newp++ = *p++;

		}
		else
		{
			*newp = length + 1 + '0';//转化字符
			*(newp + 1) = ch;
			newp += 2;
			p += length + 1;

		}



	}


	lengthstr = strlen(newstr);
	newstr = _recalloc(newstr, lengthstr + 1, 1);//重新分配空间

	return newstr;
}

char* unzipnew(char* str)
{
	char* newstr = calloc(1000, 1);//分配缓冲空间
	
	char* p = str;
	char* newp = newstr;//备份

	while (*p != '\0')
	{
		if (*p >= '0' && *p <= '9')
		{
			int length = *p-'0';//转化为数字
			for (int i = 0; i < length; i++)
			{
				*newp++ = *(p + 1);//拷贝
			}
			p += 2;//跳过压缩空间

		}
		else
		{
			*newp++ = *p++;
		}



	}
	int lengthstr = strlen(newstr);

	newstr = _recalloc(newstr, lengthstr + 1, 1);

	return newstr;


}