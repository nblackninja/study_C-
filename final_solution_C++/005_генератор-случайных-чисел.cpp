#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int randomNumber = rand() % 10 + 5; // переменная со случайным числом от 5 до 15

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

*/
