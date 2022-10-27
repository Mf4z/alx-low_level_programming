#include "main.h"

/**
  * reverse_array - function that reverses the content
  * of an array of integers
  *
  * @a: a pointer to int array
  * @n:length of array
  *
  * Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i;
	int holder;

	i = 0;

	for (i = 0; (i < n / 2); i++)
	{
		holder = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = holder;
	}

}
