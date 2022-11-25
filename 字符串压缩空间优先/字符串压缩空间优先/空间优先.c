
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>


void spacezip1(char* str)
{
	char* p1 = str;
	char* p2 = str;

	while ((*p1 = *p2) != '\0')
	{
		//if (*p1 != 'a')  //删除指定字符
		//{
		//	p1++;
		//	p2++;
		//}
		//else
		//{
		//	p2++;
		//}
		int length = 1;
		char* p3 = p2 + 1;//寻找下一个字符
		while (*p2 == *p3)  //寻找相等的最长字符
		{
			p3++;
			length++; //长度
		}
		if (length == 1)//同步
		{
			p2++;
			p1++;
		}
		else
		{
			*(p3 - 2) = length + '0';
			p2 += length - 2;//异步，跳过其他相同的字符

		}
	}


}




void spacezip(char* str)
{
	char* p1 = str;
	char* p2 = str;
	while ((*p1=*p2) !='\0')
	{
		int length = 1;
		char* p3 = p2 + 1;//表示下一个字符
		while (*p2 == *p3)
		{
			p3++;
			length++;
		}
		if (length == 1)  //同步
		{
			p1++;
			p2++;
		}
		else
		{
			*(p3 - 2) = length + '0';//-1在后面，-2在前面
			
			//p2 += length;//删除所有相同的
			p2 += length - 2;
		}

	}

}

void unspacezip(char* str)
{
	char* p1 = str;
	char* p2 = str;
	while ((*p1 = *p2) != '\0')
	{

		int length = 0;
		if (*p2 <= '9' && *p2 >= '0')
		{
			length = *p2 - '0';//长度
		}

		char ch = *(p2 + 1);//获取后面一个字符
		if (length == 0)
		{
			p1++;
			p2++;
		}
		else
		{
			for (char* p = p2 + strlen(p2); p >= p2; p--)
			{
				*(p + length - 2) = *p;
			}
			for (int i = 0; i < length; i++)
			{
				p2[i] = ch;
			}

		}

	}


 }



void main()
{
	char str[1024] = "aaaaabbbbnnnnninindfgalovegooooggggooooogg";

	printf("-- %s --\n", str);

	spacezip(str);
	printf("-- %s --\n", str);
	unspacezip(str);
	printf("-- %s --\n", str);

	spacezip1(str);
	printf("-- %s --\n", str);



	system("pause");
}