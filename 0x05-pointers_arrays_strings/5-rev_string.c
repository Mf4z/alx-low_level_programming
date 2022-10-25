#include "main.h"

/**
  * rev_string - function that function that reverses a string
  *
  * @s: a pointer the string we want to print
  *
  * Return: Nothing
  */
void rev_string(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;


	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
