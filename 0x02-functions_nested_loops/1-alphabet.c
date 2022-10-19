#include "main.h"

void print_alphabet(void);

/**
  * main - Program entry point
  *
  * Description: Print strings using putchar()
  *
  * Return: Return 0
  */
int main(void)
{
	print_alphabet();

	return (0);
}

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
