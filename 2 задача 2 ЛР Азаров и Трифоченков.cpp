#include <iostream>
using namespace std;

int main()
{
setlocale (0, "");
int number;

cout << "Введите число: ";
cin >> number;

if (number > 0) {
	cout << "Число положительное" << endl;
                }
else if (number < 0) {
	cout << "Число отрицательное" << endl;
                     }
else {
	cout << "Число равно нулю" << endl;
     }

return 0;
}
