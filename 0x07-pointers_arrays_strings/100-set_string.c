#include "main.h"

/**
  * set_string - function that sets the value of a pointer to a char
  * @s: char pointer to pointer
  * @to : char pointer
  *
  * Return: Nothing
  */
void set_string(char **s, char *to)
{
	*s = to;
}
