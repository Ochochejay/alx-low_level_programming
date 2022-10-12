#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes of the main func
 * @m: pointer to the func
 * @n: number of bytes
 */

void print_opcodes(char *m, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%hhx", m[i]);
		if (i < (n - 1))
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(av[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);

	return (0);
}
