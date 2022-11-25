
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct Mystructx
{
	int num;        //c不能在结构体中初始化，cpp可以
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
	struct Mystruct my1 = { {10,"calc"},11,"notepad" };//只用创建是可以用大括号初始化
	my1.my1.num=99;//逐层调用
	my1.num = 22;
	struct Mystruct my2 = my1;
	printf("%s,%d,%s,%d", my1.my1.str, my1.my1.num, my1.str, my1.num);

	printf("%s,%d,%s,%d", my2.my1.str, my2.my1.num, my2.str, my2.num);

	system("pause");
}