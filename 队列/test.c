#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void test1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	QueuePop(&q);
	printf("%d\n", QueueEmpty(&q));
	printf("%d\n", QueueFront(&q));
	printf("%d\n", QueueBack(&q));
	QueueDestroy(&q);
}

int main()
{
	test1();
	return 0;
}
