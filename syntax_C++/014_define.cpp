#include <iostream> 
using namespace std;

int main()
{
	setlocale(0, "ru");



	system("pause");
	return 0;
}

/* define - дериктива препроцессора

	#include - позволяет вывать директиву, до того, как скомпилировать код.
	#define - (определить) определяет константы, п\срабатывает до компиляции.


	Макросы
	#define FOO(x,y)((x)+(y))
	cout << FOO(3, 2) << endl;


	Условная компиляция (используется, например, для скрытия отладочнйо информации)
	то же, что и if(), но описывается не в коде, а в дериктиве проепроцессора
	1. определить #define NAME
	2. ifdef NAME
	3. endif
	4. Чтобы удалить отладочную информацию между 2 и 3 пунктом, нужно просто удалить define

	#define DEBUG
	#ifdef DEBUF
	cout << "дебаг определен";
	#else
	cout << "дебаг не определен";
	#endif // DEBUG


	Тернарный оператор
	int a = 5
	if(a > 10)
	{
		cout << "a больше 10" << endl;
	}
	else
	{
		cout << "a меньше 10" << endl;
	}
	
	тоже самое
	a<10? cout << "a больше 10" << endl : cout << "a меньше 10" << endl;
	? = if
	: = else


	Параметры int(main)
	нужны, чтобы что-то сообщить программе при запуске
	int main(int argc, char* argv[])
	argc = сколько параметров передать
	argv = массив, который содержит строки. Нулевой параметр - путь до exe

	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

*/