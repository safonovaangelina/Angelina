// Для чисел Фибоначчи известны некоторые тождества:
//Докажите эти тождества и напишите программу для вычисления ЧФ с помощью разделяй и властвуй.
#include <iostream>
#include <vector>
using namespace std;
int Fibonachi(int n) 
{
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	if (n % 2 == 0) 
	{
		n /= 2;
		return pow(Fibonachi(n + 1), 2) - pow(Fibonachi(n - 1), 2);
	}
	else 
	{
		--n;
		n /= 2;
		return pow(Fibonachi(n), 2) + pow(Fibonachi(n + 1), 2);
	}
}

int main() 
{
	int n;
	cin >> n;
	cout << Fibonachi(n);
	return 0;
}
