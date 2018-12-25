#include <iostream> 
#include <string> 
using namespace std;

class Human // класс
{ 
private:
	string name;
	int age;

public:
	Human() // конструктор, при котором нет передаваемых значений значений
	{
		name = "Dont name";
		age = 00;
	}

	Human(string valueName, int valueAge) // перегруженный конструктор
	{
		name = valueName;
		age = valueAge;
	}

	void PrintHuman()
	{
		cout << "Имя: " << name << endl << "Возраст: " << age << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");

	Human Nikita("Никита", 16); // объект класса
	Nikita.PrintHuman();

	system("pause");
	return 0;
}

/* Конструктор классов

По сути это функция, которая вообще не имеет никакого типа, и называется, как класс
public:
	Print()
	{
	
	}

Обязателньо в public


Деструктор (~) - всегда один и срабатывает когда выходим из main
class MyClass
{
	MyClass()
	{
		cout << "Конструктор вызвался" << endl;
	}
	~MyClass()
	{
		cout << "Деструктор вызвался" << endl;
	}
}

this - констнтный указатель на адрес в памяти
this -> nameVar


Перегрузка оператора присваивания
https://www.youtube.com/watch?v=UsezbK-3BL0&index=97&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r








*/