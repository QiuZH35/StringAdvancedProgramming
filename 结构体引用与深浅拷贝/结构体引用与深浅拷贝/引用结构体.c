
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct Mystructx
{
	int num;        //c�����ڽṹ���г�ʼ����cpp����
	char str[10];

};
struct Mystruct
{
	struct Mystructx my1;
	int num;
	char str[10];
};





void main1()
{
	struct Mystruct my1 = { {10,"calc"},11,"notepad" };//ֻ�ô����ǿ����ô����ų�ʼ��
	my1.my1.num=99;//������
	my1.num = 22;
	struct Mystruct my2 = my1;
	printf("%s,%d,%s,%d", my1.my1.str, my1.my1.num, my1.str, my1.num);

	printf("%s,%d,%s,%d", my2.my1.str, my2.my1.num, my2.str, my2.num);

	system("pause");
}