#include "function_pointers.h"

/**
  * print_name - function that prints a name
  *
  * @name: string literal passed as a name
  * @f: method pointer whihc takes in a
  * char pointer/string literal as an argument
  *
  * Return: Returns nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		exit(EXIT_FAILURE);

	f(name);
}
