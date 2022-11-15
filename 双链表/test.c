#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"
void test1(ListNode* phead)
{
	ListInsert(phead->next, 3);
	ListInsert(phead->next, 2);
	ListPushFront(phead, 1);
	ListPushBack(phead, 4);
	ListPopBack(phead);
	ListPrint(phead);
	ListPopFront(phead);
	ListPrint(phead);
}
int main()
{
	ListNode* phead = ListCreate();
	test1(phead);
	ListDestory(phead);
	phead = NULL;
	return 0;
}
