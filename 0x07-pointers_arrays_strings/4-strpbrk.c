#include "main.h"

/**
  * *_strpbrk - function that searches a string for any of a set of bytes
  *
  * @s: a char pointer
  * @accept: prefix string
  *
  * Return: Returns a pointer to the byte in s that matches
  * one of the bytes in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				return (ptr);
			}

			j++;
		}

		i++;
	}

	return ('\0');
}
