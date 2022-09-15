#include "main.h"

/**
 * print_triangle - prints traingles with #.
 * @size: Set the size of triangle.
 * Return: void.
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = (size - 1); b > a; b--)
				_putchar(' ');

			for (c = a; c >= 0; c--)
				_putchar('#');

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
