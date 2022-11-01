#include "main.h"

/**
  * *_strchr - function that locates a character in a string
  *
  * @s: a char pointer
  * @c: a character to match
  *
  * Return: Returns a pointer to the first occurrence of the character c
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s);
		else
			i++;
	}

	if (*s == c)
		return (s);
	else
		return ('\0');
}
