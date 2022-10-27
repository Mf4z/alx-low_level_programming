#include <stdio.h>
#include "main.h"

/**
  * print_buffer - function that prints a buffer
  *
  * @b: a pointer to a char array
  * @size: size of buffer
  *
  * Return: None
  */
void print_buffer(char *b, int size)
{
	int count, byte;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (count = 0; count < 10; count++)
		{
			if ((count + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + count + byte));

			if ((count % 2) != 0 && count != 0)
				printf(" ");
		}

		for (count = 0; count < 10; count++)
		{
			if ((count + byte) >= size)
				break;
			else if (*(b + count + byte) >= 31 &&
				*(b + count + byte) <= 126)
				printf("%c", *(b + count + byte));
			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
