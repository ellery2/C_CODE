#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strcpy(char* str1, char* str2);
int main()
{
	char str1[] = "*****";
	char str2[] = "acd";
	printf("%s",my_strcpy(str1, str2));
	return 0;
}
char* my_strcpy(char* str1, char* str2)
{
	char* ret = str1;
	while (*str1++ = *str2++)
	{
		;
	}
	return ret;
}
