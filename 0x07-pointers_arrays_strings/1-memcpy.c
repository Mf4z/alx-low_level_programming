#include "main.h"

/**
  * *_memcpy - function that copies memory area
  *
  * @dest: a pointer to destination
  * @src: a pointer to source
  * @n: number of times to place constant in memory
  *
  * Return: Pointer to destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
