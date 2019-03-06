#include "holberton.h"

/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: argument count
* @av: argument vector
*
* Return: NULL if ac == 0 or av == NULL, pointer to a new string
*/

char *argstostr(int ac, char **av)
{
	int i, j, len, a;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;

	while (av[i][j])
	{
		len++;
		j++;
	}
	len++;

	cat = malloc(len * sizeof(char) + 1);

	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, a++)
		{
			cat[a] = av[i][j];
		}
		cat[a] = '\n';
		a++;
	}
	return (cat);
}
