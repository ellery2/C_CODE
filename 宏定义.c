#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int n = 10, m = 5, sum5 = 2;
#define Mul(type, x)\
printf("the n is "type"\n", x);

#define Print(type, x)\
printf("the " #x " is " #type"\n", x);

#define Add(n, x)\
sum##n += x;
int main()
{
	Mul("%d", n);
	Print(%d, m);
	Add(5, 10);
	printf("sum5 = %d\n", sum5);
	return 0;
}

