#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int num1, num2;

	cout << "Введите 2 числа через пробел: " << endl;
	cin >> num1 >> num2;

	cout << "Сумма: " << num1 + num2 << endl;
	cout << "Вычитание: " << num1 - num2 << endl;
	cout << "Произведение: " << num1 * num2 << endl;
	cout << "Деление: " << num1 / num2 << endl;

	system("pause");
	return 0;
}
