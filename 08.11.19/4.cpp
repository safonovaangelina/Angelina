#include <iostream> 
#include <algorithm> 
using namespace std;
// ввод функции
int dig_trench(int n, int **a) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
     a[i][j] = abs(i - j);
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
	int **trench = new int*[b];
	for (int i = 0; i < b; i++) {
		trench[i] = new int[b];
	}
	// вызов функции
	dig_trench(b, trench);
	return 0;
}
