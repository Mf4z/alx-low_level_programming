#include <stdio.h>
#include "main.h"

/**
  * print_array - function that prints n elements of an
  * array of integers, followed by a new line
  *
  * @a: a pointer to the array
  * @n: number of elements of the array to be printed
  * Return: Nothing
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");

	}

	_putchar('\n');
}
