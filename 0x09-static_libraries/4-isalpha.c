#include "main.h"

/**
  * _isalpha - Checks if entered character is an alphabet
  * @c: character to check
  *
  * Return: Returns 1 for lowercase and 0 for uppercase
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
