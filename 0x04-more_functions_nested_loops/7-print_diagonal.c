#include "main.h"

/**
  * print_diagonal - Prints diagonal \ n number of times
  *
  * @n: number passed to determine number of lines
  */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	while (n > 0)
	{
		j = i;

		while (j > 0)
		{
			_putchar(' ');
			j--;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}

	if (i < 1)
		_putchar('\n');
}
