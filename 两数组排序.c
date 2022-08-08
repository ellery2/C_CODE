#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void fun(int* str, int num);
int main()
{
    int i = 0, j = 0, m, n, k = 0, t = 0;
    scanf("%d %d", &m, &n);
    int arr1[m], arr2[n];
    int arr3[m + n];
    int max = m + n;
    fun(arr1, m);
    fun(arr2, n);
    for (t = 0; t < max; t++)
    {
        if (i >= m || j >= n)
        {
            break;
        }
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (k < m + n)
    {
        if (i >= m)
        {
            arr3[k++] = arr2[j++];
        }
        else if (j >= n)
        {
            arr3[k++] = arr1[i++];
        }
    }
    for (i = 0; i < max; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}
void fun(int* str, int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        scanf("%d", str + i);
    }
}