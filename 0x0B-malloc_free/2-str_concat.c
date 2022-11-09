#include "main.h"

/**
  * *str_concat - function that concatenates two strings
  *
  * @s1: string literal passed
  * @s2: string literal passed
  *
  * Return: Returns a pointer to a newly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	int concat_length, s1_length, s2_length, i;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	s1_length = 0;
	s2_length = 0;

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	/* Add 1 to make it length of array not string and to include '/0' */
	s2_length++;

	concat_length = s1_length + s2_length;

	concat = malloc(sizeof(*concat) * concat_length);

	if (concat == NULL)
		return (NULL);

	/* Fill up concat with s1 string */
	for (i = 0; i < s1_length; i++)
		concat[i] = s1[i];

	/* Continue filling up concat with s2 string */
	for (i = 0; i < s2_length; i++)
		concat[s1_length + i] = s2[i];

	return (concat);
}
