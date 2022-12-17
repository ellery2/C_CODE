#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void AdjustDown(HPDataType* a, int n, int parent);

void HeapCreate(Heap* php, HPDataType* a, int n)
{
	assert(php);
	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	memcpy(php->a, a, sizeof(HPDataType) * n);
	php->size = php->capacity = n;
	for (int i = (n - 2) / 2; i >= 0; i--)
	{
		AdjustDown(php->a, n, i);
	}
}

void HeapInit(Heap* php)
{
	php->a = NULL;
	php->size = php->capacity = 0;
}

void HeapDestory(Heap* php)
{
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
	//ע��php��û�п��ռ䣬��������Ƕ���ṹ�����������������пռ�
	// ����һ������Ƕ���Ľṹ��ָ�룬��ʱ����û�п��ٿռ�ģ���Ҫmalloc
	//free(php);	
}

void Swap(HPDataType* a, HPDataType* b)
{
	HPDataType tmp = *a;
	*a = *b;
	*b = tmp;
}

void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapPush(Heap* php, HPDataType x)
{
	assert(php);
	int newcapacity = 0;
	if (php->size == php->capacity)
	{
		newcapacity = php->size == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror(realloc);
			exit(-1);
		}
		php->a = tmp;
		//���ݻ��¿��Ĳ���Ҫ��
		php->capacity = newcapacity;
	}
	//sizeָ�����һ��������һλ
	php->a[php->size++] = x;
	AdjustUp(php->a, php->size - 1);
}


void AdjustDown(HPDataType* a, int n, int parent)
{
	//�ȼ������Ӵ�һ��
	int child = parent * 2 + 1;
	while (child < n)
	{
		//����ֻ�����ӵ��������ʱ����Ҫ�ж�
		if ((child+1) < n && a[child] < a[child + 1])
		{
			child++;
		}

		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(Heap* php)
{
	assert(php);
	Swap(&php->a[0], &php->a[php->size-1]);
	php->size--;
	AdjustDown(php->a, php->size, 0);
}

HPDataType HeapTop(Heap* php)
{
	return php->a[0];
}

int HeapEmpty(Heap* php)
{
	return php->size == 0;
}