#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - Print Natural numbers from n to 98
  * @n: number to check
  *
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}

	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}

	printf("%d\n", n);
}
