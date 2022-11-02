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
//��ʼ��
void SeqListInit(SeqList* ps);
//����
void SeqListDestroy(SeqList* ps);
//β��
void SeqListPushBack(SeqList* ps);
//���
void SeqListPrint(SeqList* ps);
//ͷ��
void SeqListPushFront(SeqList* ps, SLDateType x);
//ͷɾ
void SeqListPopFront(SeqList* ps);
//βɾ
void SeqListPopBack(SeqList* ps);
//˳������
int SeqListFind(SeqList* ps, SLDateType x);
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, int pos, SLDateType x);
//// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, int pos);