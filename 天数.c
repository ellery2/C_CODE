#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct data
{
	int year;
	int month;
	int day;
};
int year_check(int n);
int main()
{					//1 2 3  4  5  6  7  8  9  10 11 12月份
    int i = 0, sum = 0;
	int arr[13] = { 0,31,0,31,30,31,30,31,31,30,31,30,31 };
	struct data num = { 0,0,0 };
	scanf("%d %d %d", &num.year, &num.month, &num.day);
    int n = year_check(num.year);//返回1：二月29天    返回2：二月28天
    if (n == 1)
    {
        arr[2] = 29;
    }
    else
    {
        arr[2] = 28;
    }
    for (i = num.month; i < 13; i++)
    {
        sum += arr[i];
    }
    printf("当月还剩下%d天\n", (sum - num.day));
	return 0;
}
int year_check(int year)
{
    int flag;
    if ((year % 4 == 0) && ((year % 100) != 0) || year % 400 == 0)  //能被4整除，但不能被100整除。或者能被400整除，flag=1
    { 
        flag = 1;
    }
    else 
    {    //不是闰年，flag=0
        flag = 0;
    }
    if (flag == 1)
    {
        return 1;
    }
    else 
    {
        return 2;//不是闰年
    }
}
