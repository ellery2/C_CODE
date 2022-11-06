#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;//����ֺ�ǧ�������

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//����һ���ڵ�
SLTNode* BuySLTNode(SLTDataType x);
//��������
SLTNode* CreateSList(int n);
//��ӡ
void SLTPrint(SLTNode* phead);
//β��
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//βɾ
void SLTPopBack(SLTNode** pphead);
//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDataType x);
//ͷɾ
void SLTPopFront(SLTNode** pphead);
//����
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//pos�����
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//ɾ��pos����
void SListEraseAfter(SLTNode* pos);
//�����������
void SListDestroy(SLTNode* phead);