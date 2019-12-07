//Напишите функцию находящую корень монотонной вещественной функции f бинарным поиском(бисекцией). Можно считать что корень обязательно существует. Корнем будем считать значение x, такое что |f(x)|<10^(-6).  В комментариях напишите, почему решение- эффективное

#include <iostream>
using namespace std;

int main() 
{
	double n, granA, granB;
	cin >> n;
	for (int i = 1; true; ++i) 
	{
		if (i * i > n) 
		{
			granA = i - 1;
      granB = i;
			break;
		}
		else if (i * i == n) 
		{
			cout << i;
			return 0;
		}
	}
	double unit;
	for (int i = 0; i < 20; ++i) 
	{
		unit = (granA + granB) / 2;
		if (unit * unit > n)
			granB = unit;
		else if (unit * unit == n)
			break;
		else
			granA = unit;
	}
	cout << unit;
	return 0;
}
