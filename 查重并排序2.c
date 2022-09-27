#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0, i = 0, n = 0;
	scanf("%d", &num);
	int arr[10000] = { 0 };
	for (i = 0; i < num; i++)
	{
		scanf("%d", &n);
		arr[n] = n;
	}
	for (i = 0; i < 10000; i++)
	{
		if (arr[i] != 0)
			printf("%d", arr[i]);
	}
	return 0;
}
