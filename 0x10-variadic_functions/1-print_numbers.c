#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, followed by a new line
  *
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: Returns nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int i = n;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	if (i--)
		printf("%d", va_arg(valist, int));
	while (i-- > 0)
		printf("%s%d", separator, va_arg(valist, int));
	printf("\n");

	va_end(valist);
}
