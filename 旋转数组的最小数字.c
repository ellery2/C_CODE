#define _CRT_SECURE_NO_WARNINGS 1
//����һ
//������ʱ�临�Ӷ�O(N)

//int minArray(int* numbers, int numbersSize) {
//    int i = 0;
//    for (i = 0; i < numbersSize - 1; i++)
//    {
//        if (numbers[i] > numbers[i + 1])
//            return numbers[i + 1];
//    }
//    return numbers[0];
//}


//������
//���ַ�   ʱ�临�Ӷ�O(logN)

int minArray(int* numbers, int numbersSize) {
    int left = 0, right = numbersSize - 1, mid = 0;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (numbers[mid] > numbers[right])
        {
            left = mid + 1;//ע�⣺����ط�>˵���˴��϶�������������Ҫ��ֵmid+1�����������ѭ��
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
