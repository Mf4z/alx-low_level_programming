#include "main.h"

/**
  * _realloc - function that reallocates a memory block using malloc and free
  *
  * @ptr: pointer to the memory previously allocated with a call to malloc
  * @old_size: size, in bytes, of the allocated space for ptr
  * @new_size: new size, in bytes of the new memory block
  *
  * Return: None,reallocates a memory block using malloc and free
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *ptr_copy, *holder;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	memory = malloc(sizeof(*ptr_copy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	holder = memory;

	for (i = 0; i < old_size && i < new_size; i++)
		holder[i] = *ptr_copy++;

	free(ptr);

	return (memory);
}
