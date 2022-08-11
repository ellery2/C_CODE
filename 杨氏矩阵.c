#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0, j = 0;
	int num = 0;
	scanf("%d", &num);
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			arr[i][j] = i + j;
		}
	}
	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if (num == arr[i][j])
			{
				printf("´æÔÚ");
				return;
			}
		}
	}
	if (num != arr[i][j])
	{
		printf("²»´æÔÚ");
	}
	return 0;
}
