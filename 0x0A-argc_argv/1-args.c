#include "main.h"

/**
 * main - Entry point.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 0)
		argc -= 1;

	printf("%d\n", argc);
	return (0);
}
