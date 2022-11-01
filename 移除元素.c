#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���󷽷�
// д�ĺ���
//int removeElement(int* nums, int numsSize, int val) {
//    if (numsSize == 0)
//        return 0;
//    int tmp = 0, i = 0;
//    int* left = nums;
//    int* right = nums + numsSize - 1;
//    while (left < right)
//    {
//        while (*left != val)
//        {
//            left++;
//            if (left == right)
//                return numsSize;
//        }
//        while (*right == val)
//        {
//            right--;
//            if (left == right)
//                return 0;
//            i++;
//        }
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//        i++;
//        left++;
//        right--;
//    }
//    if (i == 0 && val == nums[0])
//        return 0;
//    if (i == 0 && val != nums[0])
//        return 1;
//    return (numsSize - i);
//}
int main()
{
    int nums[] = {2,3,3,2};
    int numsSize = 4;
    int val = 3;
    removeElement(nums, numsSize, val);
    return 0;
}


//����һ
//����˫ָ��ķ���
//left������Ǵ��λַ��right����Ҫ���Ԫ��
//int removeElement(int* nums, int numsSize, int val) {
//	int left = 0, right = 0;
//	while (right < numsSize)
//	{
//		if (nums[right] != val)
//		{
//			nums[left] = nums[right];
//			right++;
//			left++;
//		}
//		else
//		{
//			right++;
//		}
//	}
//	return left;
//}


//������
//����˫ָ�룬����right�����ұߡ�
//����ڷ���һ������������

int removeElement(int* nums, int numsSize, int val) {
    int left = 0, right = numsSize;
    while (left < right)
    {
        if (nums[left] == val)
        {
            nums[left] = nums[right - 1];
            right--;
        }
        else
        {
            left++;
        }
    }
    return left;
}
	