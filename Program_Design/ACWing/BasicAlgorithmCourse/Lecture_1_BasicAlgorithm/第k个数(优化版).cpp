// 题目链接：https://www.acwing.com/problem/content/788/

// 思路：
// 使用传统的快排的时间复杂度是nlogn，但是使用快速选择排序时间复杂度为线性
// 使用快排思路将数组分成两部分后，左边的数是严格小于右边的数的，因此如果k小于左边数列的长度，答案一定在左边
// 就不需要排序右边的数组了

#include<iostream>

using namespace std;

const int N = 100010;

int n, k;
int p[N];

int quick_sort(int l, int r, int k)
{
	if(l == r) return p[l];
	int x = p[l], i = l - 1, j = r + 1;
	while(i < j)
	{
		do i++; while (p[i] < x);
		do j--; while (p[j] > x);
		if(i < j) swap(p[i], p[j]);
	}
	int sl = j - l + 1;
	if (k <= sl) return quick_sort(l, j, k);
	
	return quick_sort(j + 1, r, k - sl);
}

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> p[i];
	
	cout << quick_sort(0, n - 1, k);
	
	return 0;
}