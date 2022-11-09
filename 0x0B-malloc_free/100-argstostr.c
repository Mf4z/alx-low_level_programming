#include "main.h"

/**
  * *argstostr - function that concatenates all the arguments of your program
  * @ac: number of arguments
  * @av: double pointer to array of strings
  *
  * Return: Returns a pointer to a new string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	char *tmp, *new_str;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}

	total++;

	tmp = malloc(total * sizeof(*tmp));

	if (tmp == NULL)
		return (NULL);

	new_str = tmp;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*tmp = av[i][j];
			tmp++;
		}

		*tmp = '\n';
		tmp++;
	}

	return (new_str);
}
