//Напишите программу, находящую первые n составных чисел. Программа должна работать не более чем за О(n*log log n) шагов.
#include <iostream>
#include <vector>
using namespace std;

int main()

{
	int n;
	cin >> n;
	vector <int> prime(n + 1, true);
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
	for (int i = 3; i <= n; i++)
	{
		if (prime[i] == false)
		{
			cout << i << " ";
		}
	}
	return 0;
}
