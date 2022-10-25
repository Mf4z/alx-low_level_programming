#include "main.h"

/**
  * print_rev - function that prints a string,
  * in reverse, followed by a new line
  *
  * @s: a pointer the string we want to print
  *
  * Return: Nothing
  */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;


	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
