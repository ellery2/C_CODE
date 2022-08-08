#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void fun1(int n);
void fun2(int n);
int main()
{
	//i代表第几排  j是空格数  num1表示上半部分有几排
	int i = 0, j = 0, num1 = 0, n = 0, t = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n % 2 != 0)
		{
			fun1(n);
		}
		else
		{
			fun2(n);
		}
	}
	return 0;
}
void fun1(int n)
{
	int j = 0, i = 0, num1 = 0;
	num1 = (n - 1) / 2;
	for (i = 0; i < num1; i++)
	{
		j = 0;
		while (j < i)
		{
			printf(" ");
			j++;
		}
		printf("*");
		int t = n - 2 * i - 2;
		for (; t > 0; t--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (i = 0; i < num1; i++)
	{
		printf(" ");
	}
	printf("*\n");
	//下半部分
	j = 0; i = 0;
	int t = 0;
	for (i = 0; i < num1; i++)
	{
		j = 0;
		while (j < num1 - 1 - i)
		{
			printf(" ");
			j++;
		}
		printf("*");
		t = 1 + 2 * i;
		for (; t > 0; t--)
		{
			printf(" ");
		}
		printf("*\n");
	}
}

void fun2(int n)
{
	//i代表第几排  j是空格数  num1表示上半部分有几排
	int i = 0, j = 0, num1 = 0, t = 0;
	num1 = n / 2;
	for (i = 0; i < num1; i++)
	{
		j = 0;
		while (j < i)
		{
			printf(" ");
			j++;
		}
		printf("*");
		int t = n - 2 * i - 2;
		for (; t > 0; t--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	//下半部分
	i = 0; t = 0;
	for (i = 0; i < num1; i++)
	{
		j = 0;
		while (j < num1 - 1 - i)
		{
			printf(" ");
			j++;
		}
		printf("*");
		t = 2 * i;
		for (; t > 0; t--)
		{
			printf(" ");
		}
		printf("*\n");
	}
}
