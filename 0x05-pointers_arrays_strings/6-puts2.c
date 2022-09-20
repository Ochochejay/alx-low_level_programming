#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: string to print.
 * Return: void.
 */

void puts2(char *str)
{
	int i, len, j;

	i = 0;
	len = 0;
	j = 0;
	while (*(str + i) != 0)
	{
		len++;
		i++;
	}

	for (j = 0; j < len; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
