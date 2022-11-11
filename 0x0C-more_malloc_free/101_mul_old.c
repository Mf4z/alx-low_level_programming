#include "main.h"

/**
  * _printer - function that prints and move strings to the left one at a time
  *
  * @str: string to move
  * @len: length of string
  *
  * Return: Returns Nothing
  */
void _printer(char *str, int len)
{
	int i, j;

	i = j = 0;
	while (i < len)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == len - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}


/**
  * mul - program that multiplies two positive numbers
  *
  * @c: char to multiply
  * @num: string to multiply
  * @num_index: last non NULL index of number
  * @dest: product of multiplication
  * @dest_index: highest index to start addition
  *
  * Return: Returns pointer to destination, or NULL on failure
  */
char *mul(char c, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mul_rem, add, add_rem;

	mul_rem = add_rem = 0;

	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (c - '0') * (num[j] - '0') + mul_rem;
		mul_rem = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + add_rem;
		add_rem = add / 10;
		dest[k] = add % 10 + '0';
	}

	for (add_rem += mul_rem; k >= 0 && add_rem; k--)
	{
		add = (dest[k] - '0') + add_rem;
		add_rem = add / 10;
		dest[k] = add % 10 + '0';
	}

	if (add_rem)
	{
		return (NULL);
	}

	return (dest);
}

/**
  * digit_check - function that checks arguments for digits
  *
  * @ptr_args: Pointer arguments
  *
  * Return: 0 if digit 1 not digit
  */
int digit_check(char **ptr_args)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; ptr_args[i][j]; j++)
		{
			if (ptr_args[i][j] < '0' || ptr_args[i][j] > '9')
				return (1);
		}
	}
	return (0);
}


/**
  * initialise - function that initialises strings
  *
  * @str: string to initialise
  * @len: length of string
  *
  * Return: Returns nothing
  */
void initialise(char *str, int len)
{
	int i;

	for (i = 0; i < len; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
  * main - main function that multiplies two numbers
  *
  * @argc: number of arguments
  * @argv: argument vector
  *
  * Return: Returns nothing or exit status 98 if failed
  */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || digit_check(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;

	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	initialise(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; t--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_printer(a, ln - 1);

	return (0);
}
