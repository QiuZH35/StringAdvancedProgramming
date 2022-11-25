
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

char* timefastzip(char *str)
{
	int length = strlen(str); //��ȡ�ַ�����
	char* newstr =(char *)calloc(length + 1, 1);//�����ڴ�
	 
	char* p = str;
	char* newp = newstr;

	while (*p != '\0')
	{
		char* pis = p;//���ݵ�ǰָ��
		char ch = *pis;//��ǰ�ַ�
		int strlenth = 0;
		while ((*pis) == (*(pis + 1))) //������
		{
			pis++;//ָ���ƶ�
			strlenth++;//����
		}
		if (strlenth == 0) //���ظ����ַ�ֱ�ӿ�����newp
		{
			*newp++ = *p++;
		}
		else
		{
			*newp = strlenth + 1 + '0';//ת��Ϊ�ַ�,��һ���ַ������������ȣ�����Ҫ�����Ǹ��ַ�
			*(newp + 1) = *p;//������ͬ��һ���ַ�
			newp += 2;//�����ѱ��������Ԫ��
			p += strlenth + 1;//ָ����ǰ�ƶ�
		}
	}
	length = strlen(newstr);//�µĳ���

	newstr = _recalloc(newstr, length + 1, 1);//ѹ���ռ�
	return newstr;
}


char* timefastunzip(char *str)
{
	char* newstr = calloc(10000, 1);//���仺����
	
	char* p = str;
	char* newp = newstr; //����
	while (*p != '\0')
	{

		char* pis = p;
		if (*pis >= '0' && *pis <= '9')
		{
			int length = *pis - '0';//��ȡ�ظ��ĳ���
			for (int i = 0; i < length; i++)
			{
				*newp++ = *(pis + 1);//�����ַ�
			}
			p += 2;//����ѹ���Ŀռ䣬ָ������
		}
		else
		{
			*newp++ = *p++;

		}

	}
	int length = strlen(newstr); //�µĳ���

	newstr = _recalloc(newstr, length + 1, 1);//ѹ���ռ�


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