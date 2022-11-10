#include "main.h"

/**
  * *create_array - function that fills memory with a constant byte
  *
  * @size: size of array size
  * @c: character to initialise array with
  *
  * Return: Returns pointer to an initialised array of size provided
  */
char *create_array(unsigned int size, char c)
{
	char *char_array;

	unsigned int i;

	if (size < 1)
		return (NULL);

	char_array = malloc(sizeof(*char_array) * size);

	if (char_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		char_array[i] = c;

	return (char_array);
}
