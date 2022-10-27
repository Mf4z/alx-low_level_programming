#include <stdio.h>
#include "main.h"

/**
  * main - main function
  *
  * Return: Nothing
  */
int main(void)
{
	int n;
	int a[5];
	int *ptr;

	a[2] = 1024;
	ptr = &n;

	ptr[5] = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}
