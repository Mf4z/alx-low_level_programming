#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
  * main - Code entry point
  *
  * Return: Return 0 after execution
  */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);

		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);

		upper++;
	}

	putchar('\n');

	return (0);
}
