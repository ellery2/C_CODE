#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
char* replaceSpace(char* s) {
    int i = 0, j = 0, num = 0, space = 0, n = 0;
    char* a = s;
    while (*a != '\0')
    {
        if (*a == ' ')
            space++;//�ո���
        a++;
    }
    num = strlen(s);
    n = 2 * space;
    char* b = (char*)malloc(num + n + 1);   //ע�����+1���ٿ�һ������û����'\0'
    while (j != num + n)
    {
        if (*(s + i) != ' ')
        {
            *(b + j) = *(s + i);
        }
        else
        {
            *(b + j) = '%';
            *(b + j + 1) = '2';
            *(b + j + 2) = '0';
            j += 2;
        }
        i++;
        j++;
    }
    *(b + j) = '\0';    //�����Ҫ�Ѷ�̬���ڴ����ַ����������Ҫ����һ��'\0'
    return b;
}

int main()
{
    char s[] = "We are happy.";
    char* b = replaceSpace(s);
    puts(b);
    free(b);
    b = NULL;
    return 0;
}
