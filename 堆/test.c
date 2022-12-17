#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void test1()
{
	int i = 0;
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	Heap hp;
	HeapInit(&hp);
	int n = 10;
	while (n--)
	{
		HeapPush(&hp, arr[i++]);
	}
	HeapPop(&hp);
	HeapDestory(&hp);
}

void test2()
{
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	Heap hp;
	HeapCreate(&hp, arr, 10);
	HeapDestory(&hp);
}

int main()
{
	//test1();
	test2();
	return 0;
}
