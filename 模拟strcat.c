#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strcat(char* str1, char* str2);
int main()
{
	char str1[10] = "abc";
	char str2[] = "def";
	printf("%s", my_strcat(str1, str2));
	return 0;
}
char* my_strcat(char* str1, char* str2)
{
	char* ret = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
