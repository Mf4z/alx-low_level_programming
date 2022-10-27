#include "main.h"

/**
  * _strcmp - function that comares two strings
  *
  * @s1: a pointer to first array
  * @s2: a pointer to second array
  *
  * Return: Nothing
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while ((s[i] != '\0') || (s2[i] != '\0'))
	{
		if (s[i] != s2[i])
			return (s[i] - s2[i]);

		i++;
	}

	return (0);
}
