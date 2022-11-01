#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals
  * of a square matrix of integers
  *
  * @a: array to be printed
  * @size: size
  *
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int i, sum, size_prod;

	i = 0;
	sum = 0;
	size_prod = size * size;

	while (i < size_prod)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}

	printf("%d, ", sum);

	sum = 0;

	i = 0;

	while (i < size_prod)
	{
		if (i % (size - 1) == 0 && i != (size_prod - 1) && i != 0)
			sum += a[i];
		i++;
	}

	printf("%d\n", sum);
}
