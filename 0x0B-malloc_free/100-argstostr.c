#include "main.h"

/**
 * _length - determines string length.
 * @av: string
 * @ac: integer
 * Return: string length
 */

int _length(int ac, char **av)
{
	int i;

	for (i = 0; av[ac][i]; i++)
		;

	return (i);
}

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *c;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _length(i, av);

	c = malloc((len) * sizeof(char));

	if (c == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[len] = av[i][j];
			len++;
		}
		c[len++] = '\n';
	}

	return (c);
}
