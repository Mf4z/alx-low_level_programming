#include "main.h"

/**
  * _abs - Checks if entered character is an alphabet
  * @n: number to check
  *
  * Return: Returns absolute value of number passed
  */
int _abs(int n)
{
	if (n < 0)
		return ((-1) * n);

	else
		return (n);
}
