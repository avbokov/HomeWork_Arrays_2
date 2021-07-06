#include<iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define TASK_1
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef TASK_1
	const int n = 10;

	// Вывод массива

	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << endl;

	int number_of_shifts;
	char direction_of_shifts;

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	cout << endl;
	cout << "Для сдвига влево нажмите l, для сдвига вправо нажмите r";
	cout << endl << endl;

	direction_of_shifts = _getch();

	switch (direction_of_shifts)
	{
	case 'l':

		cout << "Сдвигаем массив влево на " << number_of_shifts << " элемент(-а, -ов):" << endl << endl;

		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];

			for (int i = 1; i < n; i++)
			{
				arr[i - 1] = arr[i];
			}
			arr[n - 1] = buffer;
		}
		break;

	case 'r':

		cout << "Сдвигаем массив вправо на " << number_of_shifts << " элемент(-а, -ов):" << endl << endl;

		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];

			for (int i = n - 1; i > 0; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[0] = buffer;
		}
		break;
	}

	// Вывод сдвинутого массива

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // TASK_1

#ifdef TASK_2
	int number;
	int remainder;
	int n = 0;

	const int N = 20;

	int arr[N];

	cout << "Введите десятичное число ( max. 1000000 ): " << endl << endl; cin >> number;

	cout << endl;

	cout << "Десятичное число " << number << " в двоичной системе счисления: " << endl;

	if (number == 0) cout << endl << number;

	while (number >= 1)
	{
		remainder = number % 2;
		number = number / 2;

		arr[n] = remainder;
		n += 1;
	}

	cout << endl;

	for (int i = N - n; i < N; i++)
	{
		cout << arr[N - i - 1] << tab;
	}
#endif // TASK_2

#ifdef TASK_3
	int number;
	int remainder;
	int n = 0;

	const int N = 20;

	char arr[N];

	cout << "Введите десятичное число ( max. 1000000 ): " << endl << endl; cin >> number;

	cout << endl;

	cout << "Десятичное число " << number << " в шестнадцатиричной системе счисления: " << endl;

	if (number == 0) cout << endl << number;

	while (number >= 1)
	{
		remainder = number % 16;
		number = number / 16;

		arr[n] = remainder;

		if (remainder == 10) arr[n] = 'A';      // Так и не смог избавиться от этой "бомбы" ниже, без неё или только цифры или только символы ASCII
		else if (remainder == 11) arr[n] = 'B';
		else if (remainder == 12) arr[n] = 'C';
		else if (remainder == 13) arr[n] = 'D';
		else if (remainder == 14) arr[n] = 'E';
		else if (remainder == 15) arr[n] = 'F';
		else if (remainder == 0) arr[n] = '0';
		else if (remainder == 1) arr[n] = '1';
		else if (remainder == 2) arr[n] = '2';
		else if (remainder == 3) arr[n] = '3';
		else if (remainder == 4) arr[n] = '4';
		else if (remainder == 5) arr[n] = '5';
		else if (remainder == 6) arr[n] = '6';
		else if (remainder == 7) arr[n] = '7';
		else if (remainder == 8) arr[n] = '8';
		else if (remainder == 9) arr[n] = '9';

		n += 1;
	}

	cout << endl;

	for (int i = N - n; i < N; i++)
	{
		cout << arr[N - i - 1] << tab;
	}
#endif // TASK_3

}