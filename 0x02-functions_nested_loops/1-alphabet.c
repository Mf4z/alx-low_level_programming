#include "main.h"

/**
  * print_alphabet - Prints lowercase alphabet
  */
void print_alphabet(void)
{
	char letter  = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
