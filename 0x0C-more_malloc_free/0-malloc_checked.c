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
	int error = 98;


	if (b < 1)
		_putchar(error + '0');

	allocation = malloc(sizeof(b));

	if (allocation == NULL)
	{
		free(allocation);
		_putchar(error + '0');
	}

}
