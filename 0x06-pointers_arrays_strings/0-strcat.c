#include "main.h"

/**
  * *_strcat - function that copies the string pointed to by src,
  * including the terminating null byte (\0),
  * to the buffer pointed to by dest
  *
  * @dest: a pointer to destination
  * @src: a pointer to source
  *
  * Return: Nothing
  */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] += src[i];

		i++;
	}

	dest[i] = '\0';

	return (dest);
}
