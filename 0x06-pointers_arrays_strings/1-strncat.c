#include "main.h"

/**
  * *_strncat - function that concatenates
  * two strings and stops at n
  *
  * @dest: a pointer to destination
  * @src: a pointer to source
  * @n: number of praces to concatenate
  *
  * Return: Nothing
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		++destLen;

	while (src[srcLen] != '\0')
		++srcLen;

	for (i = 0; (i < srcLen && i < n); i++)
	{
		dest[destLen + i] = src[i];
	}

	return (dest);
}
