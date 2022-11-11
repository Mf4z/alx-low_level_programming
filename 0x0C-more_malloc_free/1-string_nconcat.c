#include "main.h"

/**
  * *string_nconcat - function that concatenates two strings which contains s1
  * followed by the first n bytes of s2, and null terminated
  * @s1: string literal passed
  * @s2: string literal passed
  * @n: number of second literal to concatenate
  *
  * Return: Returns a pointer to a newly allocated space in memory which
  * contains s1, followed by the first n bytes of s2, and null terminated
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;


	concat = malloc(sizeof(*concat) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	/* Add '/0' if it is the end of s2 */
	concat[len] = '\0';

	return (concat);
}
