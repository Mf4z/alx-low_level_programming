#include "main.h"

void print_strings(char *string);

/**
  * main - Program entry point
  *
  * Description: Print strings using putchar()
  *
  * Return: Return 0
  */
int main(void)
{
	char print[] = "_putchar\n";

	print_strings(print);

	return (0);
}

/**
  * print_strings - Prints strings to output
  * @string: The string to be printed
  */
void print_strings(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}

}
