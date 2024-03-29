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


// 堆的构建
void HeapInit(Heap* php);

void HeapCreate(Heap* php, HPDataType* a, int n);

// 堆的销毁
void HeapDestory(Heap* php);

// 堆的插入
void HeapPush(Heap* php, HPDataType x);

// 堆的删除
void HeapPop(Heap* php);

// 取堆顶的数据
HPDataType HeapTop(Heap* php);

// 堆的数据个数
int HeapSize(Heap* php);

// 堆的判空
int HeapEmpty(Heap* php);


