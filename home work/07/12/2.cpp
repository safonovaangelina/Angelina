// Напишите программу на основе разделяй и властвуй позволяющую эффективно проверять принадлежность пары значений массиву. Например, пара (2,3) принадлежит массиву [1,2,3,5,7,11,13,17], а пара (3,4) - нет. Можно считать, что количество запросов многократно превышает размер массива.  В комментариях напишите, почему перебор - эффективное
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(int a, int b)
{
	return a < b;
}

int main() 
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	int x, y;
	cin >> x >> y;
	sort(arr.begin(), arr.end(), cmp);
	if (x > y)
		swap(x, y);
	int granA = 0, granB = n;
	int unit;
	bool have = false;
	while (true) 
	{
		unit = (granA + granB) / 2;
		if (arr[unit] > x)
			granB = unit;
		else if (arr[unit] == x)
		{
			for(int i = unit; i < n; ++i)
				if (arr[i] == y)
				{
					cout << "YES";
					return 0;
				}
			cout << "NO";
			return 0;
		}
		else
			granA = unit;
		if (granA == granB) 
		{
			cout << "NO";
			break;
		}
	}
	return 0;
}
