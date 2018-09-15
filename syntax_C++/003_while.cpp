#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	unsigned short numberOne = 0;

	cout << "Цикл начался!" << endl;

	while (numberOne < 10)
	{
		cout << "Число a = " << numberOne << endl;
		numberOne++;
	}

	cout << "Цикл закончился!";

	system("pause");
	return 0;
}
/*

while (утверждение)
{
	действие цикла;
}


*/