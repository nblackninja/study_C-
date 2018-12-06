#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int randomNumberFunc(const int min, const int max) // #include <random>
{
	random_device rd;
	mt19937 randomAllTime(rd());
	uniform_int_distribution<int> randomNumPointsMinMax(min, max);
	int randomNumPoints = randomNumPointsMinMax(randomAllTime);

	return randomNumPoints;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int randomNumber = randomNumberFunc(0, 10); // переменная со случайным числом от 0 до 10

	unsigned short const SIZE_ARR = 10;
	int arr[SIZE_ARR];
	int sizeArr = sizeof(arr5) / sizeof(arr5[0]); // используем нулевой элемент, чтобы всегда верно узнать тип данных массива

// заполнение каждого элемента случайным числом до 10
	for (int i = 0; i < SIZE_ARR; ++i)
	{
		arr[i] = rand() % 10;
	}

// вывод массива
	for (int i = 0; i < SIZE_ARR; ++i)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
/*

rand(); - функция для получения рандомного числа
srand(); - функция устанавливающая точку отсчета для rand()
time(NULL); - считает время в секундам от 1 января 1970 года
srand(time(NULL)); - делает функцию rand() всегда разной, вызывается 1 раз

тип название_переменной = rand() % число_1 + число_2;
число_1 = макс. - число_2
максимальное = число_1 + число_2
минимальное = число_2

===
Шанс выпадения чисел
===

#include <iostream> 
#include <string> 
#include <ctime>
#include <random>
using namespace std;

int randomNumberFunc(const int min, const int max) // #include <random>
{
	random_device rd;
	mt19937 randomAllTime(rd());
	uniform_int_distribution<int> randomNumPointsMinMax(min, max);
	int randomNumPoints = randomNumPointsMinMax(randomAllTime);

	return randomNumPoints;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	double countTest;
	cout << "Количество тестов: ";
	cin >> countTest;

	double arrRandNum50 = 0,
		arrRandNum30 = 0,
		arrRandNum20 = 0;

	for (int i = 0; i < countTest; i++)
	{
		int randNum = randomNumberFunc(1, 100);

		if (randNum <= 50)
		{
			arrRandNum50++;
		}
		else if (randNum > 50 && randNum <= 80)
		{
			arrRandNum30++;
		}
		else if (randNum > 80 && randNum <= 100)
		{
			arrRandNum20++;
		}
	}

	cout << "Количество ОБЫЧНЫХ (50%): " << arrRandNum50 << endl;
	cout << "Количество РЕДКИХ (30%): " << arrRandNum30 << endl;
	cout << "Количество ЛЕГЕНДАРНЫХ (20%): " << arrRandNum20 << endl;

	cout << endl;

	cout << "Реальные данные:" << endl;
	cout << "Количество ОБЫЧНЫХ: " << (arrRandNum50 / countTest) * 100 << "%" << endl;
	cout << "Количество РЕДКИХ: " << (arrRandNum30 / countTest) * 100 << "%" << endl;
	cout << "Количество ЛЕГЕНДАРНЫХ: " << (arrRandNum20 / countTest) * 100 << "%" << endl;


	system("pause");
	return 0;
}


*/
