
#define _CRT_SECURE_NO_WARNINGS



_declspec (dllexport) void go()
{
	int* p = (int*)0x007FFC90; //����ת��

	void (*px)() = (void(*)())0x00691040;

	*p = 100;

	px();


}