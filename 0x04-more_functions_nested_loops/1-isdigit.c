#include "main.h"

/**
  * _isdigit - Checks if entered character is a digit
  * @c: character to check
  *
  * Return: Returns 1 for digits and 0 for non digits
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
