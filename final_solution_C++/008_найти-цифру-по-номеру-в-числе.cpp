#include <iostream>
#include <cmath>
using namespace std;

int FooCountNumeral(int numberF) // количество цифр в числе
{
	int cout = 0;

	while (numberF != 0)
	{
		numberF /= 10;
		cout++;
	}

	return cout;
}

int FooFindIndexNumeral(int numberF, int IndexNumeral) 
{
	int coutNumeral = FooCountNumeral(numberF);

	int ostatok = pow(10, coutNumeral + 1) / pow(10, IndexNumeral);
	int delitel = ostatok / 10;

	int numeralFind = (numberF % ostatok) / delitel;

	return numeralFind;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int number, IndexNumeral, answer;

	cout << "Введите число: ";
	cin >> number;

	cout << "Какую по счету цифру найти: ";
	cin >> IndexNumeral;

	answer = FooFindIndexNumeral(number, IndexNumeral);

	cout << "Ответ: " << answer << endl;

	system("pause");
	return 0;
}



