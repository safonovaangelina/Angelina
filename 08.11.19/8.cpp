#include <iostream>
using namespace std;

int proper_fraction(int n) {
	int x = n;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0) {
			while (n % i == 0)
				n /= i;
			x -= x / i;
		}
	if (n > 1)
		x -= x / n;
	return a;
}

int main() {
	int n, x;
	cin >> n;
	x = proper_fraction(n);
	cout << x;
	return 0;
}
