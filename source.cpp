#include "source.h"

void generate(Matr matr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			matr[i][j] = (i + 1) * (j + 1);
		}
	}
}
void output(Matr matr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << setw(4) << matr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
//======Функція віддзеркалення елементів відносно бічної діагоналі======
void mirror(Matr matr)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i + j > 9)	//Дзеркалить зверху вниз, якщо треба навпаки, то просто поміняти тут знак > на <
			{
				matr[i][j] = matr[9 - i][9 - j];
			}
		}
	}
}
//=======Практичне: знайти найбільше значення у кожному стовпці========
void max_in_column(Matr matr)
{
	int current_max;
	for (int i = 0; i < 10; i++)
	{
		current_max = 0;
		for (int j = 0; j < 10; j++)
		{
			if (matr[j][i] > current_max)
			{
				current_max = matr[j][i];
			}
		}
		cout << "maximal in column " << i + 1 << ": " << current_max << endl;
	}
}