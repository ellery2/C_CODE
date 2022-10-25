#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//方法1
//时间复杂度O(NlogM)
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

//方法2
//根据这个维数组特点，我们可以看到最大元素递增序列在最右列，那么我们可以拿最右列最小元素也就是第一行最后一个元素作为起点
//你可以发现比它大的在它下边，比它小的在它左边，若目标元素比它大就往下边移动，若比它小呢，则往左边移动，直至匹配，或未找到
//时间复杂度为O(N+M)， 空间复杂度为O(1)

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

