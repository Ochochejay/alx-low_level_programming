#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: string to print.
 * Return: void.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
