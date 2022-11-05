#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - program that multiplies two numbers
  * @argc: Count of arguments passed to main function
  * @argv: Commands passed to the main function through commandline
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
		printf("0\n");

	else if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}


	return (0);
}
