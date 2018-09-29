#include <iostream>
#include <string>
#include <random> // для случайного числа
using namespace std;

// случайное число
int FunRandomNumber(int min, int max) 
{
	random_device rd;
	mt19937 randomAllTime(rd());
	uniform_int_distribution<int> randomNumPointsMinMax(min, max);
	int randomNumber = randomNumPointsMinMax(randomAllTime);

	return randomNumber;
}

// заполнение массива 
void FillArray(int arr[], const int size_array)
{
	for (int i = 0; i < size_array; i++)
	{
		arr[i] = FunRandomNumber(0, 10);
	}
}

// вывод массива
void PrintArray(int arr[], const int size_array)
{
	for (int i = 0; i < size_array; i++)
	{
		cout << arr[i] << endl;
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");

	const int SIZE_ARRAY = 10;
	int arr[SIZE_ARRAY];

	FillArray(arr, SIZE_ARRAY);
	PrintArray(arr, SIZE_ARRAY);

	system("pause");
	return 0;
}

/*
Функция позволяет вынести повторяющийся кусок кода и потом вставлять его в программу
Объявляется обязательно до вызова самой функции

\\\ Структура ///
Объявление функции:

возвращаемое_значение имя (параметры)
{
	тело_функции;
}

Вызов функции:
	имя функции();


возвращаемое значение - любой тип(int, void, float and etc)
парамаетры не обязательны
void - функция ничего не возвращает


переменная объявленная параметром в функции, это отдельная переменная от основной программы

в функцию можно передавать массив, потому что мы указываем указатель на сам массив,
поэтому все изменения с массив в функции сохранятся

sizeof не может работать в функции, он дает размер ярлыка на массив, а не размер массива

=== Прототипы ===
если объявлять функции, после ее вызова, то компилятор выдаст ошибку
для решения придумали прототип функции
нужно просто объявить функцию, но ничего не писать в ней,
а потом заного с действиями написать в конце программы

void FunctionName(int a, int b);

int main()
{
	return 0;
}

void FunctionName(int a, int b)
{
	cout << "I am function" << endl;
}


=== Область видимости переменных ===
Локальная переменная находится в области видимости, только фигурных скобок

int main()
{
	if ()
	{
		int a; // эта переменная видна только в if
	}

	{
		int a; // можно так ограничить переменную
	}
}

Глобальная переменная - пишится в начале программы
int value; // к этой переменной можно образаться влюбой части программы
int main()
{
	return 0;
}


В функции можно задать параметр по умолчанию
void Foo(int a = 5)
{
	a + 3;
}


Inline - встраивание функции в код программы
inline void Foo(int a)
{
	// эта функци встроится в код программы
}
используется в простых функциях, компилятор сам может это сделать, сейчас можно не использовать


=== Шаблонные функции ===

template <typename T> // это значит, что принимаемый тип может любой
T functionName(T a, T b)
{
	return a + b;
} // эта функция может работать с любыми типами, но обязательно параметры одного типа(нельзя сложить int с double)

template <typename T1, typename T2> // это значит, что принимаемый тип может любой
T functionName(T1 a, T2 b)
{
	return a + b; // теперь можно передать одно число целое, а второе дробное
}
// вместо typename (Из языка Си) можно использовать class(Из С++), работают одинаково, разницы никакой


*/