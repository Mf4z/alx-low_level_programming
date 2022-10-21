#include "main.h"

/**
  * more_numbers - Prints 1-14 ten(10) times
  */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int num  = 0;

		while (num <= 14)
		{
			_putchar('0' + num);
			num++;
		}

	_putchar('\n');

	i++;

	}
}
