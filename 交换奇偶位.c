#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define Exchange(x) ((x&0x55555555)<<1 | (x&0xaaaaaaaa)>>1)
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", Exchange(a));
	return 0;
}
