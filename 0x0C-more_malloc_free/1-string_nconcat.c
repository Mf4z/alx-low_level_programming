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
	unsigned int concat_length, s1_length, s2_length, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = 0;
	s2_length = 0;

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	/* Check if n is >= s2_length */
	if (n >= s2_length)
		n = s2_length;
	/* Add 1 to make it length of array not string and to include '/0' */
	concat_length = s1_length + n + 1;

	concat = malloc(sizeof(*concat) * concat_length);

	if (concat == NULL)
		return (NULL);
	/* Fill up concat with s1 string */
	for (i = 0; i < s1_length; i++)
		concat[i] = s1[i];
	/* Continue filling up concat with s2 string */
	for (i = s1_length; i < concat_length; i++)
		concat[i] = s2[i - s1_length];

	/* Add '/0' if it is the end of s2 */
	concat[i] = '\0';

	return (concat);
}
