#include <stdio.h>
#include "main.h"

/**
  * *_strncpy - function that copies a string
  * n characters by specified number passed
  *
  * @dest: a pointer to destination
  * @src: a pointer to source
  * @n: number of characters to copy
  *
  * Return: Nothing
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];

		i++;
	}

	while (n > i)
	{
		dest[i] = '\0';

		i++;
	}

	return (dest);
}
