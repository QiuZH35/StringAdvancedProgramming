
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



void run() //������
{

	//system("notepad");
	MessageBoxA(0, "huanghui", "liqing", 0);
}

void main()
{
	int num = 10;//������
	printf("%p,%p", &num, run);

	while (1)
	{
		Sleep(5000);
		printf("\n%d", num);
	}



	system("pause");
}