#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//方法1
// 这种方法在 k > numsSize的时候就不成立了，因为 arr[i + k - numsSize] 可能超出范围

//void rotate(int* nums, int numsSize, int k) {
//    int arr[7];
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (i + k > numsSize - 1)
//        {
//            arr[i + k - numsSize] = nums[i];
//        }
//        else
//        {
//            arr[i + k] = nums[i];
//        }
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = arr[i];
//    }
//}
//


//方法2
void rotate(int* nums, int numsSize, int k) {
    int arr[7];
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        arr[(i + k) % numsSize] = nums[i];
    }
    for (i = 0; i < numsSize; i++)
    {
        nums[i] = arr[i];
    }
}


int main()
{
    int nums[7] = { 1,2,3,4,5,6,7 };
    int numsSize = 7;
    int k = 3;
    rotate(nums, numsSize, k);
    return 0;
}