#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strstr(char* str1, char* str2);
int main()
{
	char str1[] = "azsdabcert";
	char str2[] = "abc";
	printf("%s", my_strstr(str1, str2));
	return 0;
}
char* my_strstr(char* str1, char* str2)
{
	char* mem = str1;//返回值
	char* ret = str2;//用来重置str2
	while (*str1 != '\0')
	{
		mem = str1;
		while (*str1 == *str2)
		{
			if (*(str2+1) == '\0')
			{
				return mem;
			}
			str1++;
			str2++;
		}
		if(*str1 != *str2)
		{
			str2 = ret;
			str1++;
		}
	}
	return 0;
}
