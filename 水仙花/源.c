#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, num = 0;
	for (i = 10000; i < 100000; i++)
	{
		num = i;
		int e = num % 10; num /= 10;
		int d = num % 10; num /= 10;
		int c = num % 10; num /= 10;
		int b = num % 10; num /= 10;
		int a = num % 10; num /= 10;
		if (i == a * (b * 1000 + c * 100 + d * 10 + e) + (a * 10 + b) * (c * 100 + d * 10 + e) + (a * 100 + b * 10 + c) * (d * 10 + e) +
			(a * 1000 + b * 100 + c * 10 + d) * e)
			printf("%d ", i);
	}
	return 0;
}
