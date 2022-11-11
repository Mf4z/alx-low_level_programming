#include "main.h"

/**
  * *_calloc - function that fills memory with a constant byte
  *
  * @nmemb: number of elements in array
  * @size: size of array
  *
  * Return: Returns pointer to an initialised array of size provided
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(nmemb * size));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
