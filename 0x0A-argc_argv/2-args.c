#include <stdio.h>
#include "main.h"

/**
  * main - program that prints all arguments it receives
  * @argc: Count of arguments passed to main function
  * @argv: Commands passed to the main function through commandline
  * Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
