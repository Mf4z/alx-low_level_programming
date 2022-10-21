#include <stdio.h>
#include "main.h"

/**
  * main - check the code
  *
  * Description: Prints out FizzBuzz for Multiples of
  * 5 and 3, Fizz for multiples of 3, Buzz for Multiples
  * of 5
  *
  * Return: Always 0.
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");

		else if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else
			printf("%d ", i);
	}

	return (0);
}
