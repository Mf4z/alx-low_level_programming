#include "main.h"

/**
  * times_table - Prints 9 times table
  *
  * Description: This program prints out the 9 times table
  */
void times_table(void)
{
	int row, column, mult;

	for (row = 0; hour <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= 9; column++)
		{
			mult = row * column;

			if ((mult / 10) > 0)
				_putchar((mult / 10) + '0');

			else
				_putchar(' ');

			_putchar((mult % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}

}
