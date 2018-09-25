// двумерный массив
#include <iostream>
#include <string>
#include <random>
using namespace std;

int randomNumber(const int min, const int max) // #include <random>
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


	const int ROWS = 3;
	const int COLS = 3;

	int nameArray[ROWS][COLS];

	nameArray[0][0] = 11;

	cout << nameArray[0][0] << endl;


	// заполнение двумерного массива

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			nameArray[i][j] = randomNumber(0, 10);
		}
	}

	// вывод двумерного массива

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << nameArray[i][j] << "\t" << endl;
		}
	}



	system("pause");
	return 0;
}

/*
двумерный массив внешне похож на таблицу
состоит из row(строк) и col(колонок)

при инициализации строк и колонок отсчет идет от 1,
а при вызове массива отсчет от 0

тип nameArray [row][col];

тип nameArray [row][col]
{ 
	{ 11, 12 }, 
	{ 21, 22 } 
};

строки массив может сам посчитать, а колонки нужно всегда указать

*/