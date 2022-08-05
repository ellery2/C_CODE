#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i = 0, n = 0;
    //scanf("%d\n", &n);
    int arr[5];
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            sum++;
        }
        else if (arr[i] < arr[i + 1])
        {
            sum--;
        }
    }
    if (sum == n - 1 || sum == 1 - n)
        printf("sorted");
    else
        printf("unsorted");
    return 0;
}