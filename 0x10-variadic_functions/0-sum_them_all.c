#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters
  *
  * @n: number of parameters to be passed
  *
  * Return: Returns the sum of all its parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = i = 0;
	while (i < n)
	{
		sum = sum + va_arg(valist, int);
		i++;
	}

	va_end(valist);

	return (sum);
}
