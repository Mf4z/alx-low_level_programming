#include "main.h"

/**
  * *array_range - function that creates an array of integers.
  *
  * @min: first value of array
  * @max: last value of array
  *
  * Return: Returns a pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *int_array, i, size;

	if (min > max)
		return (NULL);

	int_array = malloc(sizeof(*int_array) * size);

	if (int_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		int_array[i] = min++;

	return (int_array);
}
