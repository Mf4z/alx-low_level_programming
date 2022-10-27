#include "main.h"

/**
  * *leet -  function that encodes a string into 1337
  *
  * @c: a pointer to a char array
  *
  * Return: Encoded array string
  */
char *leet(char *c)
{
	char *strings = "aeotlAEOTL";
	char *numbers = "4307143071";

	int i, j;

	i = 0;

	while (c[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == strings[j])
				c[i] = numbers[j];
		}

		i++;
	}

	return (c);
}
