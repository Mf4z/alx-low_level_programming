#include "main.h"

/**
  * _isupper - Checks if entered character is uppercase
  * @c: character to check
  *
  * Return: Returns 1 for uppercase and 0 for lowercase
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
