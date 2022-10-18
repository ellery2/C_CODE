#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct peo
{
	int a;
	char b;
	double c;
};

#define my_offsetof(type, x) (int)&(((type*)0)->x)
int main()
{
	printf("%d\n", my_offsetof(struct peo, a));
	printf("%d\n", my_offsetof(struct peo, b));
	printf("%d\n", my_offsetof(struct peo, c));
	return 0;
}
