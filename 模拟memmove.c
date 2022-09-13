#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void* memmove(void* src, void* test, int num);
int main()
{
	char src[] = "abcdefgh";
	printf("%s", memmove(src, src + 3, 3));
	return 0;
}
void* memmove(void* src, void* test, int num)
{
	void* ret = test;
	while (num--)
	{
		if (src < test)
		{
			*((char*)test + num) = *((char*)src + num);
		}
		if (src >= test)
		{
			*(char*)test = *(char*)src;
			test = (char*)test + 1;
			src = (char*)src + 1;
		}
	}
	return ret;
}
