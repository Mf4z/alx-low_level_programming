#include "main.h"

/**
  * print_last_digit - Pick last digit of number
  * @n: number to check
  *
  * Return: Returns last digit of number entered
  */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result = (-1) * result;

	_putchar(result + '0');

	return (result);
}
