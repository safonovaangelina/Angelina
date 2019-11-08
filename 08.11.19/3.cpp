#include <iostream>
using namespace std;
// ввод функции
int build_ziggurat(int n, int **a) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (i < j) {
				a[i][j] = i + 1;
			}
			else {
				a[i][j] = j + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j < n; j++) {
			if (i < j) {
				a[i][j] = n - j;
			}
			else {
				a[i][j] = n - i;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			cout << a[i][j] << " ";

		}
		cout << endl;
	}
}

int main() {

	int b;
	cin >> b;
	int **arr = new int*[b];
	for (int i = 0; i < b; i++) {
		arr[i] = new int[b];
	}
	// вызов функции
	build_ziggurat(b, arr);
	return 0;
}
