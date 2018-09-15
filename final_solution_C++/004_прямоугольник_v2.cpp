#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	unsigned short width, height, spaceWidth;

	cout << "Ширина прямоугольника: ";
	cin >> width;

	spaceWidth = width - 2;

	cout << "Высота прямоугольника: ";
	cin >> height;

	for (unsigned short i = 0; i < width; )
	{
		cout << '*';
		i++;

		if (i == width)
		{
			for (unsigned short k = 2; k < height; k++)
			{
				cout << endl << '*';

				for (unsigned short j = 0; j < spaceWidth; j++)
				{
					cout << ' ';
				}
				cout << '*';
			}
			i++;
		}
		if (i > width)
		{
			cout << endl;
			for (unsigned short kia = 0; kia < width;)
			{
				cout << '*';
				kia++;
			}
		}
	}


	system("pause");
	return 0;
}
