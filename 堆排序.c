#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 对数组进行堆排序（大堆）

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//向上调整建堆
void AdjustUp(int child, int* a)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void Heap1(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		AdjustUp(i, a);
	}
}


//向下调整建堆
void AdjustDown(int parent, int* a, int n)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if ((child+1) < n && a[child] < a[child + 1])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)
{
	//注意这里是>=，首位别忘了向下调整
	for (int i = (n-2)/2; i >= 0; i--)
	{
		AdjustDown(i, a, n);
	}
	while (n > 0)
	{
		Swap(&a[0], &a[n-1]);
		//先交换再n-1
		n--;
		AdjustDown(0, a, n);//此处的n是节点数
	}
}

int main()
{
	int arr[] = { 1,3,5,7,9,13,34,26,11,22,44 };
	int b[] = { 1,3,5,7,9,13,34,26,11,22,44 };
	HeapSort(b, sizeof(b) / sizeof(b[0]));
	return 0;
}