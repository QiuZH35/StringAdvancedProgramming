
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


//lanmda
int main()
{

	//[]() {system("notepad"); }();
	// 参数             函数体                                                           调用，传入参数    
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

	 //cpp把初始化跟赋值分开了
	 int i(10);//初始化    i=10赋值
	 char* p("calc");
	 system(p);

	system("pause");
}