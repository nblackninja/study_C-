#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	unsigned short age;

	cout << "Сколько вам лет?" << endl;
	cin >> age;

	if (age < 18)
	{
		cout << "Вы несовершеннолетний" << endl;
	}
	else if (age >= 18 && age < 100)
	{
		cout << "Вы взрослый" << endl;
	}
	else 
	{
		cout << "Вы инопланетянин :D" << endl;
	}

	system("pause");
	return 0;
}
/*
	if (утверждение или выражение)
	{
		действие 1;
	} 
	else if (утверждение или выражение 2)
	{
		действие 2;
	}
	else
	{
		действие, если условие или выражение не верно;
	}

*/