#include <iostream>
using namespace std;

bool FooLeapYear(int yearF) // год високосный или нет
{
	if(((yearF % 4 == 0) && (yearF % 100 != 0)) || (yearF % 400 == 0) )
	{
		return true;
	}
	return false;
}

bool FooCheckCorect(int dayF, int monthF) // проверка на ошибки
{
	if (dayF > 31 || dayF < 0 ||
		monthF > 12 || monthF < 0)
	{
		return false;
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int day, month, year;

	cout << "Введите дату (день/месяц/год): ";
	cin >> day >> month >> year;

	bool CheckCorect = FooCheckCorect(day, month);
	if (CheckCorect == true)
	{
		switch (month)
		{
		case 1: // 31 day in month
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (day == 31)
			{
				day = 1;
				month++;
			}
			else if (day < 31)
			{
				day++;
			}
			else
			{
				goto error;
			}
			break;
		case 4: // 30 day in month
		case 6:
		case 9:
		case 11:
			if (day == 30)
			{
				day = 1;
				month++;
			}
			else if (day < 30)
			{
				day++;
			}
			else
			{
				goto error;
			}
			break;
		case 2:
			if (day > 27)
			{
				bool LeapYear = FooLeapYear(year);
				if ( ((LeapYear == true) && (day == 29)) || ((LeapYear == false) && (day == 28)) )
				{
					day = 1;
					month++;
				}
				else
				{
					goto error;
				}
			}
			else
			{
				day++;
			}
			break;
		case 12:
			if (day == 31)
			{
				day = 1;
				month = 1;
				year++;
			}
			else
			{
				day++;
			}
			break;
		}

		cout << "Дата на следующий день: " << day << "/" << month << "/" << year << endl;
	}
	else if (CheckCorect == false)
	{
	error:
		cout << "Введена неправильная дата!" << endl;
	}


	system("pause");
	return 0;
}