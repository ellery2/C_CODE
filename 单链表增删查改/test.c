#define _CRT_SECURE_NO_WARNINGS 1
#include "slist.h"

//void test1()
//{
//	SLTNode* phead = CreateSList(10);
//	SLTPrint(phead);
//}

//void test2()
//{
//	SLTNode* phead = CreateSList(10);
//	SLTPushBack(&phead, 10);
//	SLTPushBack(&phead, 11);
//	SLTPrint(phead);
//	SLTPopBack(&phead);
//	SLTPrint(phead);
//}

//void test3()
//{
//	SLTNode* phead = CreateSList(5);
//	SLTPushFront(&phead, -1);
//	SLTPushFront(&phead, -2);
//	SLTPrint(phead);
//	SLTPopFront(&phead);
//	SLTPrint(phead);
//}

void test4()
{
	SLTNode* phead = CreateSList(5);
	SLTNode* pos = SLTFind(phead, 2);
	SLTInsertAfter(pos, 6);
	SListEraseAfter(pos);
	SLTPrint(phead);
	SListDestroy(phead);
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

