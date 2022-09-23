#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int arr[4];
int* my_atoi(char* str);
int main()
{
	int i = 0;
	char str[] = "1234";
	my_atoi(str);
	while (arr[i] != '\0')
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}
int* my_atoi(char* str)
{
	int i = 0;
	while (*str != '\0')
	{
		arr[i++] = *str++ - '0';
	}
	return arr;
}