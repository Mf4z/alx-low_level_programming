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
	if (!array || !action)
		return;

	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
