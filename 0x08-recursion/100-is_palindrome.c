#include "main.h"

int get_length(char *s);
int plaind(char *s, int l);
/**
  * is_palindrome - function that checks if string is palindrome
  *
  * @s: string
  *
  * Return: Returns 1 if palindrome otherwise return
  */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (palind(s, length - 1));
}

/**
  * get_length - Get length of string
  *
  * @s: string
  *
  * Return: Returns length of string
  */
int get_length(char *s)
{
	if (*s == '\0')
		return (1);

	else
		return (1 + get_length(s + 1));
}

/**
  * palind - recursive check for palindrome
  *
  * @s: string
  * @l: length of string
  *
  * Return: 1 if palindrome, 0 if not
 */
int palind(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (palind(s + 1, l - 2));
	}
	else
		return (0);
}
