#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, j = 0, ret = 0, n = 0;
	int arr[6] = { 1, 4, 5, 6, 2, 3 };
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				ret = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = ret;
				n++;
			}
		}
		if (n == 0)
			break;
	}
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
