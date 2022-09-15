#include "main.h"

/**
 * print_square - Prints a square in # form.
 * @size: Size of the square.
 * Return: void.
 */

void print_square(int size)
{
	int n, x;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else if (size <= 0)
		_putchar('\n');
}
