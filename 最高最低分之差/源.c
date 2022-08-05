#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n, i, j, ret = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                ret = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = ret;
            }
        }
    }
    printf("%d", arr[n - 1] - arr[0]);
    return 0;
}

