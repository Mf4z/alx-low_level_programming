#include "main.h"

/**
  * _strlen - function that returns the length of a string
  * @s: a pointer the string we want to count
  *
  * Return: string count in integer
  */
int _strlen(char *s)
{
	int count = 0;

	while(s[count] != '/0')
	{
		count++;
	}

	return count;
}
