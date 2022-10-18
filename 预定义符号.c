#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 1000
#define reg register          //为 register这个关键字，创建一个简短的名字
#define do_forever for(;;)
int main()
{
	printf("file: %s\nline: %d\n", __FILE__, __LINE__);
	printf("time: %s\ndate: %s\n", __TIME__, __DATE__);
	return 0;
}
