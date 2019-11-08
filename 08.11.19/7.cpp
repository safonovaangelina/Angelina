#include <iostream>
using namespace std;

int strange_multiply(int a, int b)
{
	int x;
	if (a > 0) {
		for (int i = 0; i < a; i++) {
			x += b;
		}
	}
	else
	{
		for (int i = 0; i < -a; i++) {
			x -= b;
		}
	}
	return x;
}

int main() {
	int a, b, x;
	cin >> a >> b;
	x = strange_multiply(a, b);
	cout << x;
	return 0;
}
