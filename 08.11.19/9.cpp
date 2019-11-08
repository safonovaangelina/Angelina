#include <iostream> 
using namespace std;
// ввод функции 
int strange_sum(int * a, int b, int c) {
	if (c - b == 1) {
		return a[b];
	}
	return strange_sum(a, b, (c + b) / 2) + strange_sum(a, (c + b) / 2, c);
}

int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	// вызов функции 
	cout << strange_sum(a, 0, n);

	return 0;
}


