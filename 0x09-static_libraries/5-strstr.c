#include "main.h"

/**
  * *_strstr - function that locates a substring
  *
  * @haystack: a char pointer with total words
  * @needle: a char pointer with words to find
  *
  * Return: Returns a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
				&& *haystack != '\0')
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0')
			return (start);

		haystack = start + 1;
	}

	return ('\0');
}
