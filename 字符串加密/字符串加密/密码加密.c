
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void huijiami(char* str, char* password,int lengths)
{
	int alllength = lengths;
	int mimalength = strlen(password);
	if (alllength % mimalength == 0)
	{
		for (size_t i = 0; i < alllength; i++)
		{
			for (size_t j = 0; j < mimalength; j++)
			{
				str[i * mimalength + j] ^= password[j];


			}
		}

	}
	else
	{
		//100/7*7  98
		for (size_t i = 0; i < alllength; i++)
		{
			for (size_t j = 0; j < mimalength; j++)
			{
				str[i * mimalength + j] ^= password[j];
			}
		}
		for (int k = 0; k < alllength % mimalength; k++)//处理后面不为整块的数据
		{
			str[k + alllength / mimalength * mimalength] ^= password[k];
		}

	}


}


void main()
{
	char str[1024] = "zhangchuming say: weiqiang i love you 1314 forever";
	char password[30] = "loverui1314";
	int length = strlen(str);
	huijiami(str, password,length);
	printf("%s\n", str);
	huijiami(str, password, length);
	printf("%s\n", str);
	system("pause");
}