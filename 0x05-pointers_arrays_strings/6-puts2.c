#include "main.h"

/**
  * puts2 - unction that prints every other character of a string,
  * starting with the first character, followed by a new line
  *
  * @str: a pointer the string we want to print
  *
  * Return: Nothing
  */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		_putchar('\n');
		count++;
	}
}
