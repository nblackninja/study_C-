#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int num;

	cout << "Введите число 1, 2 или 3: ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "Вы ввели число 1";
		break;
	case 2:
		cout << "Вы ввели число 2";
		break;
	case 3:
		cout << "Вы ввели число 3";
		break;
	default:
		cout << "Вы ввели число не из доступного диапозона";
		break;
	}

	system("pause");
	return 0;
}
/*

switch (переменная)
{
case значение_переменной:
	действие;
	break; // прерыввание
case 1:
	действие 1;
	break;
default:
	действие, если ни одно значение не совпало;
	break;
}

*/