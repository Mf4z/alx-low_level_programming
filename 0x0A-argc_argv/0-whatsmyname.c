#include <stdio.h>
#include "main.h"

/**
  * main - program that prints its name, followed by a new line
  * @argc: Count of arguments passed to main function
  * @argv: Commands passed to the main function through commandline
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
