#include "main.h"

/**
  * *cap_string - function that capitalizes all words of a string
  * letters of a string to uppercase
  *
  * @str: a pointer to a char array
  *
  * Return: Uppercase Words string array
  */
char *cap_string(char str)
{
	int i, j;
	char *ignore = ",;.!?(){}\n\t\" ";
	int ignoreCount;

	ignoreCount = 0;

	while (ignore != '\0')
		++ignoreCount;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;

			else
			{
				for (j = 0; j < ignoreCount; j++)
				{
					if (ignore[j] == str[i - 1])
						str[i] -= 32;
				}
			}
		}

		i++;
	}

	return (str);
}
