
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


//lanmda
int main()
{

	//[]() {system("notepad"); }();
	// ����             ������                                                           ���ã��������    
	[](int a, int b) {printf("a=%d,b=%d", a, b); MessageBoxA(0, "world", "hello", 0); }(10, 20);

	//MessageBoxA(0, "world", "hello", 0);
	int a[10]{ 1,2,3,4,5,6,7,8,9,10 };
	for (auto i : a)
	{
		printf("%d\n", i);
	}

	 for each(int is in a)
	{
		printf("%d\n", is);
	}

	 //cpp�ѳ�ʼ������ֵ�ֿ���
	 int i(10);//��ʼ��    i=10��ֵ
	 char* p("calc");
	 system(p);

	system("pause");
}