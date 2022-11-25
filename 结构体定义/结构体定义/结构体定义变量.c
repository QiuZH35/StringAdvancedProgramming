
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define Struct  struct kaifang//定义类型



//结构体之作用于本文件
struct kaifang
{
	char name[20];
	char email[30];
	char addr[100];
	long long teltephone;
}d5,*pss,*pes[10];  //定义变量的方法



Struct
{
	char name[20];
	char email[30];
	char addr[100];
	long long teltephone;
};


void main()
{


	struct kaifang   //局部结构体
	{
		char name[20];
		char email[30];
		char addr[100];
		long long teltephone;
	}d5, * pss, * pes[10];




	system("pause");
}