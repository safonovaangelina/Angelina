
#include <iostream>
#include <vector>
using namespace std;

int Func(int n) 
{
	int count = 0;
	while (n) 
	{
		if (n % 3 == 2)
			++count;
		n /= 3;
	}
	return count;
}

void OutA(vector<int> arr, int k) 
{
	for (int i = 0; i < arr.size(); ++i)
		if (Func(arr[i]) < k)
			cout << arr[i] << " ";
}

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	int k;
	cin >> k;
	OutA(arr, k);
	return 0;
}
