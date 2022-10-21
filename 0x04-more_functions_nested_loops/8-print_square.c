#include "main.h"

/**
  * print_square - Prints n number of # squares
  *
  * Description: This function prints # size determined by given size
  *
  * @size: number passed to determine number of #
  */
void print_square(int size)
{
	int i, j;

	j = 0;

	if (size > 1)
		_putchar('\n');

	while (j < size)
	{
		i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		j++;
	}

}
