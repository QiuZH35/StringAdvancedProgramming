
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//��Ө,021-224321,F,19000101,�Ϻ��мζ�����亱�԰��·301��,201812,21224,021-69136448/247,021-69136466,y.wang@argus.net.cn,

struct kaifang
{
	char name[20];
	char email[30];
	char addr[100];
	long long teltephone;
}kia2 = {.addr="�Ϻ��мζ�����亱�԰��·301��"};  //c99�﷨


struct   //�����ṹ�壬��������������
{
	char name[20];
	char email[30];
	char addr[100];
	long long teltephone;
} boss1,boss2;  //������



//�ṹ��Ƕ�ף����൱��C++�ļ̳�
struct kaifang1
{

	struct kaifang dd;
	int num;

};
struct kaifang2
{
	struct  kaifang1 ddd;
	int num;


};









void main()
{
	struct kaifang kai1;
	//kai1.addr = "�Ϻ��мζ�����亱�԰��·301��"; //error �ṹ���ַ�����Ա����ֱ�Ӹ�ֵ��c99�﷨������������ֱ�Ӹ�ֵ
	
	
	strcpy(kai1.email,"y.wang@argus.net.cn");//��Ӹ�ֵ
	strcpy(kai1.name, "��Ө");
	strcpy(kai1.addr, "�Ϻ��мζ�����亱�԰��·301��");
	kai1.teltephone =1234568794;

	printf("%s,%s,%s,%lld",kai1.name,kai1.addr,kai1.email,kai1.teltephone);

	struct kaifang* p;//�ṹ��ָ��
	p = &kai1;
	printf("\n%s,%s,%s,%lld", p->addr, p->email, p->name, p->teltephone);

	printf("\n%s", kia2.addr);
	system("pause");
}