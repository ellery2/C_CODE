#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
int main()
{
	SeqList s;
	SeqListInit(&s);
	//尾插
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	//头插
	SeqListPushFront(&s, 0);
	//头删
	SeqListPopFront(&s);
	//尾删
	SeqListPopBack(&s);
	SeqListPushBack(&s, 6);
	//查找
	if (SeqListFind(&s, 10) != -1)
	{
		printf("%d\n", SeqListFind(&s, 3));
	}
	else
	{
		printf("没找到\n");
	}
	//中间插
	SeqListInsert(&s, 2, 8);
	//中间删
	SeqListErase(&s, 2);
	SeqListPrint(&s);
	SeqListDestroy(&s);
	return 0;
}
