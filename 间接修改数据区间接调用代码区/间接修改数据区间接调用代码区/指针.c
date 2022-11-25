
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



void run() //代码区
{

	//system("notepad");
	MessageBoxA(0, "huanghui", "liqing", 0);
}

void main()
{
	int num = 10;//数据区
	printf("%p,%p", &num, run);

	while (1)
	{
		Sleep(5000);
		printf("\n%d", num);
	}



	system("pause");
}