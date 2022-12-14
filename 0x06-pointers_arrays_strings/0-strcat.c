#include "main.h"

/**
  * *_strcat - function that concatenates two strings
  *
  * @dest: a pointer to destination
  * @src: a pointer to source
  *
  * Return: Nothing
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		++destLen;

	while (src[srcLen] != '\0')
		++srcLen;

	for (i = 0; i < srcLen; i++)
	{
		dest[destLen + i] = src[i];
	}

	return (dest);
}
