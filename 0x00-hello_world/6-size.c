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

	printf("Size of a char: %d byte(s)\n", character);
	printf("Size of a int: %d byte(s)\n", integer);
	printf("Size of a long int: %d byte(s)\n", longInt);
	printf("Size of a long long: %d byte(s)\n", longLong);
	printf("Size of a float: %d byte(s)\n", floatNum);

	return (0);
}
