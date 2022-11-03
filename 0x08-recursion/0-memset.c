#include "main.h"

/**
  * *_memset - function that fills memory with a constant byte
  *
  * @s: a pointer to destination
  * @b: constant to place in memory
  * @n: number of times to place constant in memory
  *
  * Return: Pointer to memory s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
