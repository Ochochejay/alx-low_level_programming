#include "main.h"

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: product on success
 */

int main(int ac, char *av[])
{
	int result;

	if (ac != 3)
	{
		puts("Error\n");
		exit(98);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[j]; j++)
		{
			if (!(av[i][j] >= 'a' && av[i][j] <= 'z' ||
			(av[i][j] >= 'A' && av[i][j] <= 'Z'))
			{
				Puts("Error\n");
				exit(98);
			}
		}
	}

	result = atoi(av[1]) * atoi(av[2]);

	return (result);
}
