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
	int num = '0';

	while (num <= '16')
	{
		putchar(num);

		num++;
	}

	putchar('\n');

	return (0);
}
