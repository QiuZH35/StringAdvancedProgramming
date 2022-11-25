
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>


char* timefastzip1(char* str)
{
	int lengthstr = strlen(str);//��ȡ�ַ�������
	char* newstr = (char*)calloc(lengthstr + 1, 1);//�����ڴ�

	char* p = str;
	char* newp = newstr;//����
	while (*p != '\0')
	{
		char* pis = p;//���ݵ�ǰָ��
		char ch = *pis;//��ǰ�ַ�
		int length=0;
		while ((*pis) == (*(pis + 1))) //������ȵ��ַ�
		{
			pis++;
			length++;//����
		}
		if (length == 0) //���ظ�ֱ�Ӹ�ֵ
		{
			*newp++ = *p++;
		}
		else
		{
			*newp = length + 1 + '0';//��1����Ϊ����������Ϊ�Ƚϣ���ͬ
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
	char* newstr = calloc(1000, 1);//����ռ�

	char* p = str;//����
	char* newp = newstr;
	while (*p != '\0')
	{

		if (*p >= '0' && *p <= '9')//��������
		{
			int length = *p - '0';
			for (int i = 0; i < length; i++)
			{
				*newp++ = *(p + 1);
			}
			p += 2;//����ѹ���ַ��ĳ���

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
	int lengthstr = strlen(str);//��ȡ�ַ�������
	char* newstr = calloc(lengthstr + 1, 1);//���ٿռ�


	char* p = str;
	char* newp = newstr;//����

	while (*p != '\0')
	{
		char* ps = p;//��ȡ��ǰ��ַ,��ȡp�����µ�ַ������
		char ch = *p;//��ȡ��ǰ�ַ�
		int length = 0;
		while (*(ps) == *(ps+1))  //��ͬ�ַ�
		{
			ps++;
			length++;//����

		}
		if (length == 0)//����ֱͬ�ӿ���
		{
			*newp++ = *p++;

		}
		else
		{
			*newp = length + 1 + '0';//ת��Ϊ�ַ�
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
	char* newstr = calloc(1000, 1);//����ռ�
	char* p = str;
	char* newp = newstr;//����
	while (*p != '\0')
	{

		if (*p >= '0' && *p <= '9')
		{
			int lengthstr = *p - '0';
			for (int i = 0; i < lengthstr; i++)
			{
				*newp++ = *(p + 1);

			}
			p += 2;//����ѹ���ַ�����
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
	int lengthstr = strlen(str);//���㳤��
	char* newstr = calloc(lengthstr + 1, 1);

	char* p = str;//
	char* newp = newstr;//����
	while (*p != '\0')
	{
		char* ps = p;//��ȡ���µĵ�ַ
		char ch = *ps;//��ȡ�ַ�
		int length = 0;
		while (*(ps) == *(ps + 1))//������ͬ���ַ�
		{
			ps++; //ָ�����
			length++; //����
		}
		if (length == 0)
		{
			*newp++ = *p++;

		}
		else
		{
			*newp = length + 1 + '0';//ת���ַ�
			*(newp + 1) = ch;
			newp += 2;
			p += length + 1;

		}



	}


	lengthstr = strlen(newstr);
	newstr = _recalloc(newstr, lengthstr + 1, 1);//���·���ռ�

	return newstr;
}

char* unzipnew(char* str)
{
	char* newstr = calloc(1000, 1);//���仺��ռ�
	
	char* p = str;
	char* newp = newstr;//����

	while (*p != '\0')
	{
		if (*p >= '0' && *p <= '9')
		{
			int length = *p-'0';//ת��Ϊ����
			for (int i = 0; i < length; i++)
			{
				*newp++ = *(p + 1);//����
			}
			p += 2;//����ѹ���ռ�

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