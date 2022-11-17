#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given as a parameter
  * on each element of an array
  *
  * @array: array pointer
  * @size: array size
  * @action: method pointer which will be used
  *
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action || size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
