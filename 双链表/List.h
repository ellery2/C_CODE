#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}ListNode;

// �������������ͷ���.
ListNode* ListCreate();

// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);

// ˫�������ӡ
void ListPrint(ListNode* pHead);	

// ˫������ͷ��
void ListPushFront(ListNode* pHead, LTDataType x);

// ˫������β��
void ListPushBack(ListNode* pHead, LTDataType x);

// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);

// ˫������βɾ
void ListPopBack(ListNode* pHead);

// ˫������ͷɾ
void ListPopFront(ListNode* pHead);

//˫����������
void ListDestory(ListNode* pHead);