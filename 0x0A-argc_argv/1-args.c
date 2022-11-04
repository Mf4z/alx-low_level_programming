#include <stdio.h>
#include "main.h"

/**
  * main - program that prints the number of arguments passed into it
  * @argc: Count of arguments passed to main function
  * @argv: Commands passed to the main function through commandline
  * Return: Always 0.
  */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
