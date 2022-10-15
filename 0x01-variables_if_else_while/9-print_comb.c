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
	int number = 0;

	while (number < 10)
	{
		putchar('0' + number);

		if (number == 9)
		{
			number++;
			continue;
		}
		putchar(',');
		putchar(' ');

		number++;
	}

	putchar('\n');

	return (0);
}
