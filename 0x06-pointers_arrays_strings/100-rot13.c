#include "main.h"

/**
  * *rot13 - function that encodes a string using rot13
  *
  * @c: a pointer to a char array
  *
  * Return: Encoded array string
  */
char *rot13(char *c)
{
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	i = 0;

	while (c[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (c[i] == alphabet[j])
			{
				c[i] = rot[j];
				break;
			}
		}

		i++;
	}

	return (c);
}
