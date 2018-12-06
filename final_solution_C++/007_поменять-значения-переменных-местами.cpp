#include <iostream>
#include <string>
using namespace std;

void swapVarPointer(int *pNum1, int *pNum2) // через указатель
{
	int temp = *(pNum1);
	*(pNum1) = *(pNum2);
	*(pNum2) = temp;
}

template <typename T>
void swapVarRef(T &var1, T &var2) // через ссылку, шаблонная функция с любым одинаковым типом данных
{
	T temp = var1;
	var1 = var2;
	var2 = temp;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int num1, num2;
	string num11, num22;

	cout << "Введите два числа: ";
	cin >> num1 >> num2;

	cout << "1 число = " << num1 << endl << "2 число = " << num2 << endl << "~~~ Числа меняются значениями через указатель ~~~" << endl;

	swapVarPointer(&num1, &num2);

	cout << "1 число = " << num1 << endl << "2 число = " << num2 << endl;

	// -------------------------

	cout << "\nВведите еще два числа: ";
	cin >> num11 >> num22;

	cout << "1 число = " << num11 << endl << "2 число = " << num22 << endl << "~~~ Числа меняются значениями через ссылку ~~~" << endl;
	swapVarRef(num11, num22);
	cout << "1 число = " << num11 << endl << "2 число = " << num22 << endl;


	system("pause");
	return 0;
}