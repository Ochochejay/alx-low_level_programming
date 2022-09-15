#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Integer to test.
 * Return: void.
 */

void print_diagonal(int n)
{
	int x = 0, b = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (b < x)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}

	else
		_putchar('\n');
}
