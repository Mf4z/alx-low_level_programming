#include "main.h"

/**
  * print_most_numbers - Prints numbers from 0-9 except 2,4
  */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;

			continue;
		}

		_putchar('0' + i);

		i++;
	}

	_putchar('\n');
}
