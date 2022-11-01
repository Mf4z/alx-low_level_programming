#include "main.h"

/**
  * _strspn - function that locates a character in a string
  *
  * @s: a char pointer
  * @accept: prefix string
  *
  * Return: Returns the number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0')
			break;
		i++;
	}

	return (count);
}
