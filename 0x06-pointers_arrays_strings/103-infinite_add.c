#include "main.h"

/**
  * reverse_string- function that reverses the content
  * of an array of integers
  *
  * @n: a pointer to chat array
  *
  * Return: Nothing
  */
void reverse_string(char *n)
{
	int i = 0;
	int j = 0;
	char holder;

	while (n[i] != '\0')
		i++;
	i--;

	for (j = 0; j < i; j++, i--)
	{
		holder = n[j];
		n[j] = n[i];
		n[i] = holder;
	}
}

/**
  *infinite_add - function that adds two numbers
  * @n1: a pointer to the first number
  * @n2: a pointer to the second number
  * @r: a pointer to the buffer
  * @size_r: buffer size
  *
  * Return: Addtion of two numbers
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int num1 = 0, num2 = 0, temp_sum = 0;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = n1[i] - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = n2[j] - '0';

		temp_sum = num1 + num2 + overflow;
		if (temp_sum >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_sum % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_string(r);
	return (r);
}

