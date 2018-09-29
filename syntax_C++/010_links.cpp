#include <iostream>
using namespace std;

void Foo1(int a)
{
	a = 1; // здесь функция ничего не сделает
}

void Foo2(int &a)
{
	a = 2; // напрямую к данных присваивается значение, работать удобнее чем с указателем
}

void Foo3(int *a)
{
	*a = 3; // работа в указателем
}



void Foo(int &a, int &b, int &c)
{
	a = 1;
	b = 2;
	c = 3;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	int a = 6;

	int *px = &a;

	int &aRef = a; // присваиние ссылке aRef адрес в памяти переменной a

	cout << "px = " << px << endl;
	cout << "*px = " << *px << endl;
	cout << "&aRef = " << aRef << endl;

	system("pause");
	return 0;
}

/* Ссылка - тоже переменная, которая хранит в себе адрес, где лежат какие-то данные

ссылка сразу работает со значением на которое указывает

при создании ссылки ей тоже присваивается адрес

&name - ссылка
*/