#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strcmp(char* str1, char* str2);
int main()
{
	char str1[] = "azsqc";
	char str2[] = "azsq";
	printf("%d",my_strcmp(str1, str2));
	return 0;
}
int my_strcmp(char* str1, char* str2)
{
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str1 == '\0')
		return 0;
	if (*str1 > *str2)
		return 1;
	if (*str1 < *str2)
		return -1;
}
