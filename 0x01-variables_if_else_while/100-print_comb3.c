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
	int i, j;
	int k = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}

			if (i == j)
				continue;

			if (i == '8' && j == '9')
				break;

			else
			{
				putchar(',');
				putchar(' ');
			}
		}

		k++;
	}

	putchar('\n');

	return (0);
}
