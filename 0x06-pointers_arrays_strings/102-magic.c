#include <stdio.h>
#include "main.h"

/**
  * main - main function
  *
  * Return: Nothing
  */
void main(void)
{
	int n;
	int num[5];
	int *ptr;

	num[2] = 1024;
	ptr = &n;

	ptr[5] = 98;

	printf("num[2] = %d\n", num[2]);

	return (0);
}
