#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void test1()
{
	st ps;
	StackInit(&ps);
	StackPush(&ps, 1);
	StackPush(&ps, 2);
	StackPush(&ps, 3);
	StackPush(&ps, 4);
	StackPush(&ps, 5);
	printf("%d\n", StackTop(&ps));
	printf("%d\n", StackEmpty(&ps));
	StackDestroy(&ps);
}

int main()
{
	test1();
	return 0;
}