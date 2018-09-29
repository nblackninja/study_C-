#include <iostream>
using namespace std;

unsigned int Factorial(unsigned int N)
{

	if (N == 0)
	{
		return 0;
	}
	else if (N == 1)
	{
		return 1;
	}

	return N * Factorial(N - 1);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	unsigned int numFac;

	cout << "Введите число для нахождения факториала: ";
	cin >> numFac;

	cout << "Факториал " << numFac << " = " << Factorial(numFac) << endl;

	system("pause");
	return 0;
}

/*

Функция реализована рекурсивно

*/
