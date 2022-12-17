#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;


// �ѵĹ���
void HeapInit(Heap* php);

void HeapCreate(Heap* php, HPDataType* a, int n);

// �ѵ�����
void HeapDestory(Heap* php);

// �ѵĲ���
void HeapPush(Heap* php, HPDataType x);

// �ѵ�ɾ��
void HeapPop(Heap* php);

// ȡ�Ѷ�������
HPDataType HeapTop(Heap* php);

// �ѵ����ݸ���
int HeapSize(Heap* php);

// �ѵ��п�
int HeapEmpty(Heap* php);


