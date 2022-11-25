
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//对于数据来说，深浅拷贝都一样，指针深拷贝拷贝内容，浅拷贝拷贝地址


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

	struct str mystr2 = mystr;  //浅拷贝，只是复制一下地址，指针指向同一片地址
	//free(mystr2.p);
	
	
	struct str mystr3;
	mystr3.p = malloc(30);
	strcpy(mystr3.p, mystr2.p);  //深拷贝，复制内容，释放其中一个另一个没有影响
	printf("mystr3=%s,mystr2=%s", mystr3.p, mystr2.p);

	printf("mystr=%s,mystr2=%s", mystr.p, mystr2.p);


	system("pause");
}