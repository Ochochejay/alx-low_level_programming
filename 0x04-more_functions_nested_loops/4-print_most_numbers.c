#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 - 9 excluding 2 and 4.
 * Return: void.
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar((n % 10) + '0');
		n++;
	}
	_putchar('\n');
}
