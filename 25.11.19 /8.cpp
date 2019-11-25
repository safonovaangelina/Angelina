
//Напишите программу, вычисляющую праймориал числа. Программа должна работать не более чем за О(n*log log n) шагов.
#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int n;
	cin >> n;
	vector <int> prime(n + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (prime[i] == true)
		{
			for (int j = i * i; j < n; j += i)
			{
				prime[j] = false;
			}
		}
	}
	int s = 1;
	if (n < 2)
	{
		s = 0;
	}
	for (int i = 2; i < n; i++)
	{
		if (prime[i] == true)
		{
			s *= i;
		}
	}
	cout << s;
	return 0;
}
