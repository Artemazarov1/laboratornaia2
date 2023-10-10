#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int chislo;
	cout << "Введите число: ";
	cin >> chislo;


	if (chislo % 3 == 0 && chislo % 5 == 0)
 {
			cout << "Число является кратным 3 и 5" << endl;
		}
		else {
			cout << "Число не кратно одновременно 3 и 5" << endl;
		}

	return 0;
}