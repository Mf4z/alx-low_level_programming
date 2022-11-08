#include "main.h"

/**
  * *_strdup - function that returns a pointer to a newly
  * allocated space in memory, which contains a copy
  * of the string given as a parameter
  *
  * @str: string literal passed
  *
  * Return: Returns a pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	int length;
	char *copy;
	int i;

	if (str == NULL)
		return (NULL);

	length = 0;

	while (str[length] != '\0')
		++length;

	copy = malloc(sizeof(*copy) * length);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	
	return (copy);
}
