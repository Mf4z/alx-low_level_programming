#include "main.h"

/**
  * print_size - Prints n number of # squares
  *
  * @size: number passed to determine number of #
  */
void print_square(int size)
{
	int i;

	while (size > 0)
	{
		i = size;

		while (i > 0)
		{
			_putchar('#');
			i--;
		}

		_putchar('\n');
		size--;
	}

	_putchar('\n');
}
