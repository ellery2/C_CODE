#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;//这个分号千万别忘了

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//开辟一个节点
SLTNode* BuySLTNode(SLTDataType x);
//创造链表
SLTNode* CreateSList(int n);
//打印
void SLTPrint(SLTNode* phead);
//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//尾删
void SLTPopBack(SLTNode** pphead);
//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x);
//头删
void SLTPopFront(SLTNode** pphead);
//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//pos后插入
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//删除pos后面
void SListEraseAfter(SLTNode* pos);
//单链表的销毁
void SListDestroy(SLTNode* phead);