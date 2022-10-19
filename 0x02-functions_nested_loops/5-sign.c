#include "main.h"

/**
  * print_sign - Prints +,- or 0 depending on number entered
  * @n: number to check
  *
  * Description: Pring + for positive, - for negative
  * and 0 for zero
  *
  * Return: Returns 1 for lowercase and 0 for uppercase
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar(0);
		return (0);

	}
}
