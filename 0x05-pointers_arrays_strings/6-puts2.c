#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: string to print.
 * Return: void.
 */

void puts2(char *str)
{
	int i, x;

	i = 0;
	while (*(str + i))
		i++;

	i--;
	for (x = 0; x < i; x += 2)
		_putchar(*(str + x));

	_putchar('\n');
}
