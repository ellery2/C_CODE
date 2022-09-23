#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void find(int arr[]);
int main()
{
	int arr[10] = { 1,2,3,3,4,4,5,5,6,6 };
	find(arr);

	return 0;
}
void find(int arr[])
{
	int i = 0, j = 0, t = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				t++;
				arr[i] = -1;
				arr[j] = -1;
			}
			if (t != 0)
			{
				break;
			}
		}
		if (t == 0)
		{
			printf("%d ", arr[i]);
		}
	}
}