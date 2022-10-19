#include "main.h"

/**
  * _islower - Checks if entered character is lowercase
  * @c: character to check
  *
  * Return: Returns 1 for lowercase and 0 for uppercase
  */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);

	else
		return (1);
}
