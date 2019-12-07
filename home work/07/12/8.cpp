// Напишите программу, находящую k-ую порядковую статистику. Программа должна работать за время O(n) в среднем.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Statistics(vector<int> arr, int k) 
{
	int right = arr.size(), left = 0;
	while (left < right) 
	{
		int mid = (left + right) / 2;
		if (mid == k)
			return arr[mid];
		else if (k < mid)
			right = mid;
		else
			left = mid + 1;
	}
	return 0;
}

int main() 
{
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout << Statistics(arr, k);
	return 0;
}
