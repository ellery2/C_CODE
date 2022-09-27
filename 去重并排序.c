#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_cmp(void* e1, void* e2);
int main()
{
    int num = 0, i = 0, j = 0;
    scanf("%d", &num);
    int* p = (int*)calloc(num, sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < num - 1; i++)//被比较数
    {
        for (j = i + 1; j < num; j++)//比较数
        {
            if (p[i] == p[j] && p[i] != -1)
            {
                p[j] = -1;
            }
        }
    }
    qsort(p, num, sizeof(int), my_cmp);
    for (i = 0; i < num; i++)
    {
        if(p[i] != -1)
        printf("%d ", p[i]);
    }
    free(p);    
    return 0;
}
int my_cmp(void* e1, void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}

