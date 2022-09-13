#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_memcpy(void* src, void* test, int num);
int main()
{
	char src[] = "qwertq";
	char test[20] = "zxcvbs";
	printf("%s", my_memcpy(src, test, 6));
	return 0;
}
char* my_memcpy(void* src, void* test, int num)
{
	void* ret = test;//·µ»Øret
	while (num--)
	{
		*(char*) test = *(char*) src;
		test = (char*)test+1;
		src = (char*)src+1;
	}
	return ret;
}