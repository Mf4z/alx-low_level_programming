#include "main.h"

/**
  * print_alphabet_x10 - Prints lowercase alphabet 10 times
  */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char letter  = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

	_putchar('\n');

	i++;

	}
}
