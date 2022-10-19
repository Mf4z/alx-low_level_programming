#include "main.h"

/**
  * print_alphabet_x10 - Prints lowercase alphabet 10 times
  */
void print_alphabet_x10(void)
{
	int i = 1;

	char letter  = 'a';

	while (i <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');

	i++;

	}
}
