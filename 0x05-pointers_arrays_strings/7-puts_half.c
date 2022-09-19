#include "main.h"

/**
 * puts_half - Prints half a string to stdout.
 * @str: string to test.
 * Return: void.
 */

void puts_half(char *str)
{
	int len, half_len;

	len = 0;
	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
		half_len = len / 2;
	else
		half_len = (len - 1) / 2;

	while (half_len < len)
	{
		_putchar(str[half_len]);
		half_len++;
	}

	_putchar('\n');
}


