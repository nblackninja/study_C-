#include <iostream> // подключение cin(ввод), cout(вывод)
#include <string> // чтобы использовать тип данных string(строчный)
using namespace std; // использовать группу имен std. Вместо std::cin, можно писать cin

// #pragma warning(disable: 4996) // исключение ошибки 4996, чтобы запустить компилятор

int main() // объявление тела программы
{
	setlocale(LC_ALL, "Russian"); // можно сократить до setlocale(0, "")

	int variable; // объявление переменной variable с типом данных integer(целочисленный)

	cout << "Hello, World!"; // синтаксис вывода
	cin >> variable; // синтаксис ввода переменной variable

	system("pause"); // приложение или консоль не будет закрыта, пока пользователь не нажмет кнопку
	return 0;
}

// однострочный комментарий

/*
многострочный комментарий
*/
