#include "main.h"

/**
  * factorial - function that returns factorial of a given number
  *
  * @n: a given number to find factorial
  *
  * Return: Returns factorail of given number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	if (n > 1)
		return (n * factorial(n - 1));

}
