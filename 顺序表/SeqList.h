#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* a;
	int size;
	int capacity;	
}SeqList;
//初始化
void SeqListInit(SeqList* ps);
//销毁
void SeqListDestroy(SeqList* ps);
//尾插
void SeqListPushBack(SeqList* ps);
//输出
void SeqListPrint(SeqList* ps);
//头插
void SeqListPushFront(SeqList* ps, SLDateType x);
//头删
void SeqListPopFront(SeqList* ps);
//尾删
void SeqListPopBack(SeqList* ps);
//顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
//// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, int pos);