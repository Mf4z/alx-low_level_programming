#include "main.h"

/**
  * *string_toupper -  function that changes all lowercase
  * letters of a string to uppercase
  *
  * @c: a pointer to a char array
  *
  * Return: Uppercase string array
  */
char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}

	return (c);
}
