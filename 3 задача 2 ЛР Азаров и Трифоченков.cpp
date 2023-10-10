#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int year;
	cout << "Введите год: ";
	cin >> year;


	if (year % 4 == 0)
	{
		cout << "Это год является високосным" << endl;
	}
	else {
		cout << "Этот год не является високосным" << endl;
	}

	return 0;
}