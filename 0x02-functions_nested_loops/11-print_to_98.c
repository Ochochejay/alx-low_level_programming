#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: Integer to test.
 * Return: void.
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}

	while (n > 98)
	{
		_putchar((n % 10) + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}

	if (n == 98)
		_putchar(n);

	_putchar('\n');
}

