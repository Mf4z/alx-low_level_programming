#include "main.h"

int is_divisible(int n, int div);
/**
  * is_prime_number - function that returns natural square root of a number
  *
  * @n: number passed to check for if it is a prime number
  *
  * Return: Returns 1 if the input integer is a prime number
  * otherwise return 0
  */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
  * is_divisible - Check if number is divisible
  *
  * @n: number to be checked
  * @div: divisor
  *
  * Return: Returns 0 is divisible -1 if not divisible
  */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);

	else if (div == n / 2)
		return (1);

	return (is_divisible(n, div + 1));
}
