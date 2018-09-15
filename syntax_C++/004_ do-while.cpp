#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	unsigned short numberOne = 0;

	cout << "Цикл начался!" << endl;

	do
	{
		cout << "Число a = " << numberOne << endl;
		numberOne++;
	} while (numberOne < 10);

	cout << "Цикл закончился!";

	system("pause");
	return 0;
}
/*
цикл do-while сначала выполнит одну итерацию, и только затем проверит условие

do
{
	действие цикла;
} while (утверждение);


*/