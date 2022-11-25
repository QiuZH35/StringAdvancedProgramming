
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//王莹,021-224321,F,19000101,上海市嘉定区封浜宝园五路301号,201812,21224,021-69136448/247,021-69136466,y.wang@argus.net.cn,

struct kaifang
{
	char name[20];
	char email[30];
	char addr[100];
	long long teltephone;
}kia2 = {.addr="上海市嘉定区封浜宝园五路301号"};  //c99语法


struct   //匿名结构体，锁定变量的数量
{
	char name[20];
	char email[30];
	char addr[100];
	long long teltephone;
} boss1,boss2;  //变量名



//结构体嵌套，，相当于C++的继承
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
	//kai1.addr = "上海市嘉定区封浜宝园五路301号"; //error 结构体字符串成员不能直接赋值，c99语法创建变量可以直接赋值
	
	
	strcpy(kai1.email,"y.wang@argus.net.cn");//间接赋值
	strcpy(kai1.name, "王莹");
	strcpy(kai1.addr, "上海市嘉定区封浜宝园五路301号");
	kai1.teltephone =1234568794;

	printf("%s,%s,%s,%lld",kai1.name,kai1.addr,kai1.email,kai1.teltephone);

	struct kaifang* p;//结构体指针
	p = &kai1;
	printf("\n%s,%s,%s,%lld", p->addr, p->email, p->name, p->teltephone);

	printf("\n%s", kia2.addr);
	system("pause");
}