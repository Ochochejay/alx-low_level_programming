#include "main.h"

/**
 * print_numbers - Prints numbers (0 - 9).
 * Return: void.
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar((n % 10) + '0');
		n++;
	}

	_putchar('\n');
}
