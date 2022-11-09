#include "main.h"

/**
  * word_count - function to count words in string
  *
  * @str: string
  *
  * Return: Returns word count in number
  */
int word_count(char *str)
{
	int i, flag, word_count;

	flag = 0;
	word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			flag = 0;

		else if (flag == 0)
		{
			flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
  * **strtow - function that returns a pointer to an array of strings (words)
  *
  * @str: string to split into words
  *
  * Return: Returns NULL if str == NULL or str == ""
  */
char **strtow(char *str)
{
	char **grid, *holding;
	int i, j = 0, len = 0, words, n = 0, start, end;

	while (*(str + len))
		len++;

	words = word_count(str);
	if (words == 0)
		return (NULL);

	grid = (char **) malloc(sizeof(char *) * (words + 1));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (n)
			{
				end = i;
				holding = (char *) malloc(sizeof(char) * (n + 1));
				if (holding == NULL)
					return (NULL);
				while (start < end)
					*holding++ = str[start++];
				*holding = '\0';
				grid[j] = holding - n;
				j++;
				n = 0;
			}
		}
		else if (n++ == 0)
			start = i;
	}

	grid[j] = NULL;

	return (grid);
}
