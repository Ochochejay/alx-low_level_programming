#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: string to print.
 * Return: void.
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != 0)
		++i;

	for (j = 0; j < i && str[j] != 0; i += 2)
		_putchar(str[j]);

	_putchar('\n');
}
