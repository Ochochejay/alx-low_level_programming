#include "3-calc.h"

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vectors
 * Return: 0
 */

int main(int ac, char *av[])
{
	int x, y, result;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(av[1]);
	y = atoi(av[3]);
	f = get_op_func(av[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(x, y);
	printf("%d\n", result);

	return (0);
}
