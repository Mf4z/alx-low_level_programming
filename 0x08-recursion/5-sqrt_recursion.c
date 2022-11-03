#include "main.h"

int sqrt_func(int n, int sq);
/**
  * _sqrt_recursion - function that returns natural square root of a number
  *
  * @n: calculate square root of given number
  *
  * Return: Returns value of natural square root of a number
  */
int _sqrt_recursion(int n)
{
	int sq = 1;

	return (sqrt_func(n, sq));
}

/**
  * sqrt_func - Square root helper function
  *
  * @n: number to find square root of
  * @sq: determine if it is a square number
  *
  * Return: Returns natural square root of a number
  */
int sqrt_func(int n, int sq)
{
	if (n == sq * sq)
		return (sq);

	else if (sq < n)
		return (sqrt_func(n, sq + 1));

	else
		return (-1);
}
