#include "main.h"

/**
  * error - function that prints error string
  *
  * Return: Returns Error and a new line
  */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
  * digit_checker- function that checks arguments for digits
  *
  * @arg: Pointer arguments
  *
  * Return: 0 if digit 1 not digit
  */
int digit_checker(char **arg)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	}
	return (1);
}

/**
  * _calloc - function that initialises memory spaces with zero
  *
  * @nmemb: string 1
  * @size: string 2 concatenated to 1
  *
  * Return: Returns pointer to concatenated string
  */
void *_calloc(unsigned  int nmemb, unsigned int size)
{
	unsigned int i;
	char *newarr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newarr = malloc(nmemb * size);

	if (newarr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		newarr[i] = 0;
	return (newarr);
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
	int i, j, carry, len, len_s1 = 0, len_s2 = 0;
	char *s1 = argv[1], *s2 = argv[2];
	int *a, *b, *ans;

	if (argc != 3 || digit_checker(argv) != 1)
		error();
	if (*s1 == '0' || *s2 == '0')
		_putchar('0');
	while (*(*(argv + 1) + len_s1))
		len_s1++;
	while (*(*(argv + 2) + len_s2))
		len_s2++;
	len = len_s1 + len_s2 + 1;
	a = (int *) malloc(len_s1 * sizeof(int));
	b = (int *) malloc(len_s2 * sizeof(int));
	ans = _calloc(len, sizeof(int));

	if (a == NULL || b == NULL || ans == NULL)
		error();

	for (i = len_s1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = s1[i] - '0';
	for (i = len_s2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = s2[i] - '0';
	for (i = 0; i < len_s2; i++)
		for (j = 0; j < len_s1; j++)
			ans[i + j] = ans[i + j] + b[i] * a[j];
	for (i = 0; i < len_s1 + len_s2; i++)
	{
		carry = ans[i] / 10, ans[i] = ans[i] % 10;
		ans[i + 1] = ans[i + 1] + carry;
	}
	for (i = len_s1 + len_s2; i >= 0; i--)
		if (ans[i] > 0)
			break;
	for (; i >= 0; i--)
		_putchar(ans[i] + '0');
	_putchar('\n');
	free(a), free(b), free(ans);
	return (0);
}
