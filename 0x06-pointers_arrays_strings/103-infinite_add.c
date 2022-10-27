#include "main.h"

/**
  * *infinite_add - function that adds two numbers
  *
  * @n1: a pointer to the first number
  * @n2: a pointer to the second number
  * @r: a pointer to the buffer
  * @size_r: buffer size
  *
  * Return: Addtion of two numbers
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_a = 0;
	int len_b = 0;
	int carry = 0;
	int a, b, sum, largest;

	while (n1[len_a] != '\0')
		len_a++;

	while (n2[len_b] != '\0')
		len_b++;

	if (len_a > len_b)
		largest = len_a;
	else
		largest = len_b;

	if ((largest + 1) >= size_r)
		return (0);

	r[largest + 1] = '\0';

	while (largest > 0)
	{
		a = (n1[len_a - 1] - '\0');
		b = (n1[len_b - 1] - '\0');

		if (len_a > 0 && len_b > 0)
			sum = a + b + carry;
		else if (len_a < 0 && len_b > 0)
			sum = b + carry;
		else if (len_a > 0 && len_b < 0)
			sum = a + carry;
		else
			sum = carry;

		if (sum > 9)
		{
			carry = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			carry = 0;
			sum = sum + '0';
		}
		r[largest] = sum;
		len_a--;
		len_b--;
		largest--;
	}

	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
