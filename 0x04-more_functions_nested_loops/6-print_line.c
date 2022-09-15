#include "main.h"

/**
 * print_line - Prints _ or a new line(\n).
 * @n: Number to test.
 * Return: void.
 */

void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
