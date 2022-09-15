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
			_putchar('\\');
			_putchar('\n');
			while (b < n)
			{
				_putchar(' ');
				b++;
			}
			x++;
		}
	}
	_putchar('\n');
}
