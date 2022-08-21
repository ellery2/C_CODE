#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int fun(const void* e1, const void* e2);
int main()
{
	int i = 0;
	int arr[10] = { 1,5,6,3,4,2,9,10,7,8 };
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), fun);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
int fun(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
