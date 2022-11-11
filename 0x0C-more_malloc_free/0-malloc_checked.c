#include "main.h"

/**
  * *malloc_checked - function that allocates memory using malloc
  *
  * @b: size memory to allocate
  *
  * Return: Returns pointer to allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void  *allocation;
	unsigned int error = 98;


	if (b < 1)
		exit(error);

	allocation = malloc(b);

	if (allocation == NULL)
	{
		free(allocation);
		exit(error);
	}

	return (allocation);
}
