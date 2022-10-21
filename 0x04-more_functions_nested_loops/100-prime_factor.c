#include "main.h"
#include <stdio.h>
#include <math.h>

/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
	int i;
	long number = 612852475143;

	for (a = (int) sqrt(number); i > 2; i++)
	{
		if (number % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
