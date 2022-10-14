#include <stdio.h>

/**
 * main - Entry point
 * Description : Print size of datatype
 * Return: Always 0 (Success)
 */

int main(void)
{
	char character;
	int integer;
	long int longInt;
	long long longLong;
	float floatNum;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of a int: %zu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long: %zu byte(s)\n", sizeof(longLong));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatNum));

	return (0);
}
