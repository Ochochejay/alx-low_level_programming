#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Integer to test.
 * Return: void.
 */

void print_diagonal(int n)
{
	int x, b;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (b = 0; b < x; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
