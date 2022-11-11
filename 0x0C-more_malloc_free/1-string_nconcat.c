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
	unsigned int s1_length, s2_length, i, offset;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = 0;
	s2_length = 0;

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	/* Check if n is >= s2_length */
	if (n >= s2_length)
		offset = s2_length;
	else
		offset = n;

	concat = malloc(sizeof(*concat) * (s1_length + offset + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		*(concat + i) = *(s1 + i);
	for (i = s1_length; i < (s1_length + offset); i++)
		*(concat + i) = *(s2 + i - s1_length);

	/* Add '/0' if it is the end of s2 */
	*(concat + i) = '\0';

	return (concat);
}
