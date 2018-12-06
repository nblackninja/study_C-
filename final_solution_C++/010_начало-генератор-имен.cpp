#include <iostream> 
#include <string> 
#include <ctime> 
#include <random>
using namespace std;

int randomNumberFunc(const int min, const int max) // #include <random>
{
	random_device rd;
	mt19937 randomAllTime(rd());
	uniform_int_distribution<int> randomNumPointsMinMax(min, max);
	int randomNumPoints = randomNumPointsMinMax(randomAllTime);

	return randomNumPoints;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	// функция, которая генерирует случайного человека по имени, фамилии и возрасту
	// дано: список имен и список фамилий

	const int SIZE1 = 4, SIZE2 = 4;
	string arrName[SIZE1] = { "Вася", "Влад", "Максим", "Никита" };
	string arrTwoName[SIZE2] = { "Лазутин", "Фрик", "Юдин", "Девяткин" };

	const int ALL_SIZE = SIZE1 * SIZE2;
	string ResultArr[ALL_SIZE];
	int i_AS = 0;

	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			string result = arrName[i] + " " + arrTwoName[j];
			ResultArr[i_AS] = result;
			i_AS++;
		}
	}


	cout << "=== Список людей ===" << endl;

	for (int i = 0, counter = 1; i < ALL_SIZE; i++, counter++)
	{
		cout << counter << ". " << ResultArr[i] << ", возраст: " << randomNumberFunc(18, 40) << endl;
	}

	system("pause");
	return 0;
}