#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//����1
//ʱ�临�Ӷ�O(NlogM)
//bool fun(int* arr, int num, int target)
//{
//	int left = 0, right = num - 1, mid = 0;
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < target)
//		{
//			left = mid;
//		}
//		else if (arr[mid] < target)
//		{
//			right = mid;
//		}
//		else
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target) {
//	int i = 0;
//	for (i = 0; i < matrixSize; i++)
//	{
//		if (fun(matrix[i], *matrixColSize, target) == true)
//		{
//			return true;
//		}
//	}
//	return false;
//}

//����2
//�������ά�����ص㣬���ǿ��Կ������Ԫ�ص��������������У���ô���ǿ�������������СԪ��Ҳ���ǵ�һ�����һ��Ԫ����Ϊ���
//����Է��ֱ�����������±ߣ�����С��������ߣ���Ŀ��Ԫ�ر���������±��ƶ���������С�أ���������ƶ���ֱ��ƥ�䣬��δ�ҵ�
//ʱ�临�Ӷ�ΪO(N+M)�� �ռ临�Ӷ�ΪO(1)

bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target) {
	if (matrixSize == 0 || matrix == NULL || *matrixColSize == 0)
		return false;
	int i = 0, j = *matrixColSize - 1;
	while (i < matrixSize && j >= 0)
	{
		if (matrix[i][j] < target)
			i++;
		else if (matrix[i][j] > target)
			j--;
		else
			return true;
	}
	return false;
}

