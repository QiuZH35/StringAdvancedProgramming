
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int com(const void* p1, const void* p2)
{
	char* pch1 =p1;
	char* pch2 =p2;
	return strcmp(pch1, pch2);
}



void main()
{
	char* str[10] = { "CF","DNF","abdf","zhang","qiu","xu","huang","zhu","liu","xie"};
	qsort(str, 10, 4, com);
	
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", str[i]);

	}



	system("pause");
}
