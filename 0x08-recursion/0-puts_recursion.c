#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}
