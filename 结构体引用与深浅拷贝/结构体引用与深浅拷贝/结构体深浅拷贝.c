
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����������˵����ǳ������һ����ָ������������ݣ�ǳ����������ַ


struct str
{
	char* p;
	int num;
};




void main()
{
	struct str mystr;
	mystr.num = 30;
	mystr.p = malloc(30);
	strcpy(mystr.p, "hello world");

	struct str mystr2 = mystr;  //ǳ������ֻ�Ǹ���һ�µ�ַ��ָ��ָ��ͬһƬ��ַ
	//free(mystr2.p);
	
	
	struct str mystr3;
	mystr3.p = malloc(30);
	strcpy(mystr3.p, mystr2.p);  //������������ݣ��ͷ�����һ����һ��û��Ӱ��
	printf("mystr3=%s,mystr2=%s", mystr3.p, mystr2.p);

	printf("mystr=%s,mystr2=%s", mystr.p, mystr2.p);


	system("pause");
}