#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;
	}
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
