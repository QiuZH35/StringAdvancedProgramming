
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
		//if (*p1 != 'a')  //ɾ��ָ���ַ�
		//{
		//	p1++;
		//	p2++;
		//}
		//else
		//{
		//	p2++;
		//}
		int length = 1;
		char* p3 = p2 + 1;//Ѱ����һ���ַ�
		while (*p2 == *p3)  //Ѱ����ȵ���ַ�
		{
			p3++;
			length++; //����
		}
		if (length == 1)//ͬ��
		{
			p2++;
			p1++;
		}
		else
		{
			*(p3 - 2) = length + '0';
			p2 += length - 2;//�첽������������ͬ���ַ�

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
		char* p3 = p2 + 1;//��ʾ��һ���ַ�
		while (*p2 == *p3)
		{
			p3++;
			length++;
		}
		if (length == 1)  //ͬ��
		{
			p1++;
			p2++;
		}
		else
		{
			*(p3 - 2) = length + '0';//-1�ں��棬-2��ǰ��
			
			//p2 += length;//ɾ��������ͬ��
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
			length = *p2 - '0';//����
		}

		char ch = *(p2 + 1);//��ȡ����һ���ַ�
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