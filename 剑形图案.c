#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void fun(int n);
int main()
{
	//上半共n+1  空格数j  排数i  *数i
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		fun(n);
	}
	return 0;
}
void fun(int n)
{
	int i = 0, j = 0, k = 0;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n * 2 - 2 * i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2 + 2 * i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < n - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
