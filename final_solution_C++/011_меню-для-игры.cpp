#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;


void clear(); // очистка консоли
int Menu_Item(); // меню
void Menu_NewGame();
void Menu_LoadGame();
void Menu_Settings();
void Menu_Author();
bool Menu_ExitGame();


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("title Заголовок окна");
	system("mode con cols=82 lines=16");// размер окна

	// settings


	// Шрифт
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 26; // размер шрифта
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Consolas"); // шрифт
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	
	while (true)
	{
		int answer = Menu_Item();

		if (answer == 1)
		{
			Menu_NewGame();
		}
		else if (answer == 2)
		{
			Menu_LoadGame();
		}
		else if (answer == 3)
		{
			Menu_Settings(TurnCount, TurnDigit, GodMode);
		}
		else if (answer == 4)
		{
			Menu_Author();
		}
		else if (answer = 5)
		{
			break;
		}
	}

	clear();
	Menu_ExitGame(); // закрыть консоль

    return 0;
}



int Menu_Item()
{
	clear();
	// Выбранный вариант меню
	int variant;
	cout << setw(30) << "Меню\n" << endl;
	cout << setw(34) << "1. Новая игра\n"
		<< setw(38) << "2. Загрузить игру\n"
		<< setw(33) << "3. Настройки\n"
		<< setw(30) << "4. Авторы\n"
		<< setw(29) << "5. Выйти\n" << endl;
	cout << ">>> ";
	cin >> variant;
	return variant;
};


// 1
void Menu_NewGame()
{
	clear();
	cout << "Приступим, выберите настройки игры\n" << endl;
	system("pause");
}

// 2
void Menu_LoadGame()
{
	clear();
	cout << "Выберите сохранение\n" << endl;
	system("pause");
}

// 3
void Menu_Settings()
{
	clear();
	cout << "Настройки игры" << endl;
	cout << endl;
}

// 4
void Menu_Author()
{
	clear();
	cout << "Автор игры - Никита Юдин\nДата создания: " << DATE_CREATE << " ноября 2018 года\n" << endl;
	system("pause");
}

// 5
bool Menu_ExitGame()
{
	return EXIT_SUCCESS;
}

void clear() {
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
};
