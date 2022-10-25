#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: a pointer the integer we want to swap
  * @b: a pointer the integer we want to swap
  *
  * Return: Returns nothing
  */
void swap_int(int *a, int *b)
{
	int swap = *b;
	*b = *a;
	*a = swap;
}
