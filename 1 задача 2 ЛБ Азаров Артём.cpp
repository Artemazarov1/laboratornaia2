#include <cmath>
#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int nomer;
	cout << "Введите число";
	cin >> nomer;

	for (int i = 2; i <= sqrt(nomer); i++)
	{
		if (nomer % i == 0)
		{
			cout << "Не является простиым числом";
			return 0;
		}
	}
	cout << "Простое число";
	return 0;
}
