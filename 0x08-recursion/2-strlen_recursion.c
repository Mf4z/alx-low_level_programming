#include "main.h"

/**
  * _strlen_recursion - function that returns lengthof string
  *
  * @s: a pointer to char / string
  *
  * Return: Returns length of string
  */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);

	length = 1 + _strlen_recursion(s + 1);

	return (length);
}
