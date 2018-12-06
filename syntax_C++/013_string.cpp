#include <iostream> 
using namespace std;

int mystrlen(const char *str) // мой аналог strlen
{
	int count_symbol = 0;
	while (str[count_symbol] != '\0')
	{ count_symbol++; }
	return count_symbol;
}

int main()
{
	setlocale(0, "ru");

	char *str = "abc";

	cout << "Содержимое строки = " << str << endl;
	cout << "STRLEN = " << strlen(str) << endl;
	cout << "моя STRLEN = " << mystrlen(str) << endl;

	system("pause");
	return 0;
}

/* Строки
	
	\0 - служебный символ, который показывает, что здесь конец строки и нигде не учитывается

	strlen(название переменной со строкой) - выводит количество символов

	strcat_s(первый_массив, второй_массив) - объединение строк

	#include <string>
	string str1 = "Hello";
	string str2 = "World!";
	string result;

	result = str1 + " " + str2; - сложение двух строк


*/