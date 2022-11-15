#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

ListNode* BuyList(LTDataType x)
{
	ListNode* node = NULL;
	node = (ListNode*)malloc(sizeof(ListNode));
	node->prev = node;
	node->next = node;
	node->data = x;
	return node;
}
// 创建返回链表的头结点.
ListNode* ListCreate()
{
	ListNode* phead = BuyList(-1);
	return phead;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* ver = pos->prev;
	ListNode* innode = BuyList(x);
	ver->next = innode;
	innode->prev = ver;
	innode->next = pos;
	pos->prev = innode;
}

// 双向链表头插
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListInsert(pHead->next, x);
}

void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListInsert(pHead, x);
}

void ListErase(ListNode* pos)
{
	ListNode* last = pos->prev;
	ListNode* next = pos->next;
	free(pos);
	last->next = next;
	next->prev = last;
}

void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->next != pHead);
	ListErase(pHead->prev);
}

void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->next != pHead);
	ListErase(pHead->next);
}

void ListPrint(ListNode* pHead)
{
	assert(pHead);
	ListNode* ver = pHead->next;
	while (ver != pHead)
	{
		printf("%d ", ver->data);
		ver = ver->next;
	}
	printf("\n");
}

void ListDestory(ListNode* pHead)
{
	assert(pHead);
	ListNode* ver = pHead->next;
	while (ver != pHead)
	{
		ListNode* next = ver->next;
		free(ver);
		ver = next;
	}
	free(pHead);
}