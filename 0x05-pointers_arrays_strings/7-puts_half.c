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
	int i, newStart;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
		newStart = count / 2;

	else
		newstart = (count - 1) / 2;

	i = newStart;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	_putchar('\n');
}
