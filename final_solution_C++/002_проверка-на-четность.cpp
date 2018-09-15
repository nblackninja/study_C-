#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int num1;

	cout << "Введите число для проверки на четность: " << endl;
	cin >> num1;

	if (num1 % 2 == 0)
	{
		cout << "Число " << num1 << " четное!" << endl;
	}
	else
	{
		cout << "Число " << num1 << " нечетное!" << endl;
	}

	system("pause");
	return 0;
}
