#include "variadic_functions.h"

/**
  * print_strings - function that prints strings, followed by a new line
  *
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: Returns nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *sprstring;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(valist, n);
	i = 0;

	while (i < (int) n)
	{
		sprstring = va_arg(valist, char *);
		if (sprstring != NULL)
			printf("%s", sprstring);
		else
			printf("(nil)");

		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(valist);
}
