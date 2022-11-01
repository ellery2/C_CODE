#define _CRT_SECURE_NO_WARNINGS 1
//方法一
//遍历，时间复杂度O(N)

//int minArray(int* numbers, int numbersSize) {
//    int i = 0;
//    for (i = 0; i < numbersSize - 1; i++)
//    {
//        if (numbers[i] > numbers[i + 1])
//            return numbers[i + 1];
//    }
//    return numbers[0];
//}


//方法二
//二分法   时间复杂度O(logN)

int minArray(int* numbers, int numbersSize) {
    int left = 0, right = numbersSize - 1, mid = 0;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (numbers[mid] > numbers[right])
        {
            left = mid + 1;//注意：这个地方>说明此处肯定不是最大，因此需要赋值mid+1，否则可能死循环
        }
        else if (numbers[mid] < numbers[right])
        {
            right = mid;
        }
        else
        {
            right--;
        }
    }
    return numbers[right];
}
