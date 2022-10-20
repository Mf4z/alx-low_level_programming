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

	if (n < 0)
		result = (-1) * n;

	return (result % 10);
}
