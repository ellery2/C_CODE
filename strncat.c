#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* strncat(char* str1, char* str2, int num);
int main()
{
	int num = 0;
	scanf("%d", &num);
	char str1[20] = "abcd";
	char str2[] = "ef";
	char* p = strncat(str1, str2, num);
	printf("%s", p);
	return 0;
}

char* strncat(char* str1, char* str2, int num)
{
	char* p = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (num--)
	{
		if(*str2 != '\0')
		*str1++ = *str2++;
		else
		{
			*str1 = *str2;
			break;
		}
	}
	return p;
}