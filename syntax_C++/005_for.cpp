#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	cout << "Цикл начался!" << endl;

	for (unsigned short numberOne = 0; numberOne < 10; numberOne++)
	{
		cout << "Число а = " << numberOne << endl;
	}

	cout << "Цикл закончился!\n" << endl;

// второй вариант использования

	cout << "Цикл 2 начался!" << endl;
	unsigned short numberOne = 0;

	for (unsigned short i = 0; i < 10; i++)
	{
		cout << "Число а = " << numberOne << endl;
		numberOne += 1;
	}

	cout << "Цикл 2 закончился!";


// третий вариант (переменную можно объявлять вне цикла, чтобы она была видна всем)
// также можно убрать условие из цикла, тогда он будет бесконечный или пока не встретится break
// точки с запятой ставить обязательно
	cout << "Цикл 3 начался!" << endl;
	unsigned short i = 0;

	for (; i < 10;)
	{
		cout << "Число а = " << i << endl;
		i++; // инкремент можно объявлять и в самом цикле
	}

	cout << "Цикл 3 закончился!";


	system("pause");
	return 0;
}
/*

	for (тип переменная = значение; условие цикла; действие после завершение одной итерации)
	{
		код;
	}

переменная объявленная в цикле, не видна вне его
	
*/