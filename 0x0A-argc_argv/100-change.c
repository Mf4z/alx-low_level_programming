#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - program that prints the minimum number of coins
  * to make change for an amount of money
  *
  * @argc: Count of arguments passed to main function
  * @argv: Commands passed to the main function through commandline
  *
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
