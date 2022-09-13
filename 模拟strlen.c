#define _CRT_SECURE_NO_WARNINGS 1
int my_strlen(char *str);
#include <stdio.h>
int main()
{
	char str[] = "abcdef";
	printf("%d", my_strlen(str));
	return 0;
}
int my_strlen(char* str)
{
	int i = 0;
	while (*str++ != '\0')
	{
		i++;
	}
	return i;
}