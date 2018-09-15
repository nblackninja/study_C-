#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	unsigned short width, height, spaceWidth;
	char star = '*';
	char spaceWidthChar = ' ';

	cout << "Ширина прямоугольника: ";
	cin >> width;

	spaceWidth = width - 2;

	cout << "Высота прямоугольника: ";
	cin >> height;

	for (int i = 0; i < width;)
	{
		cout << star;
		i++;

		if (i == width)
		{
			for (int k = 2; k < height; k++)
			{
				cout << endl << star;

				for (int j = 0; j < spaceWidth; j++)
				{
					cout << spaceWidthChar;
				}
				cout << star;
			}
			i++;
		 }
		if (i > width)
		{
			cout << endl;
			for (int kia = 0; kia < width;)
			{
				cout << star;
				kia++;
			}
		}
	 }


	system("pause");
	return 0;
}
