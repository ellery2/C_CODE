#define _CRT_SECURE_NO_WARNINGS 1
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	if (n == 0)
	{
		return;
	}
	else if (m == 0)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			nums1[i] = nums2[i];
		}
		return;
	}
	int p1 = m - 1;
	int p2 = n - 1;
	int p3 = m + n - 1;
	while (p3 >= 0)
	{
		if (nums1[p1] < nums2[p2])
		{
			nums1[p3] = nums2[p2];
			p2--;
			p3--;
		}
		else if (nums1[p1] > nums2[p2])
		{
			nums1[p3] = nums1[p1];
			p1--;
			p3--;
		}
		else
		{
			nums1[p3] = nums1[p1];
			p1--;
			p3--;
		}
		if (p1 == -1)
		{
			break;
		}
		if (p2 == -1)
		{
			return;
		}
	}
	while (p3 >= 0)
	{
		nums1[p3] = nums2[p2];
		p2--;
		p3--;
	}
}