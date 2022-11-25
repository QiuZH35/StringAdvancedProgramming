
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void jiami(char* str)  //最挫的做法
{
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		str[i] += 3;
	}


}
void jiemi(char* str)
{
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		str[i] -= 3;
	}

}

void jiamy(char* str) //异或解密
{
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		str[i] ^= 48;
	}

}

void main1()
{
	char str[1024] = "zhangchuming say: weiqiang i love you 1314 forever";
	jiami(str);
	printf("%s\n", str);
	jiemi(str);
	printf("%s\n", str);
	jiamy(str);
	printf("%s\n", str);
	jiamy(str);
	printf("%s\n", str);
	system("pause");
}