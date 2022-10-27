#include "main.h"

/**
  * print_number - function that prints an integer
  *
  * @n: number to be printed
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');

}
