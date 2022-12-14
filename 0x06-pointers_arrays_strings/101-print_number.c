#include "main.h"

/**
 * print_number - Prints integers.
 * @n: Integer to print.
 * Return: void.
 */

void print_number(int n)
{
	int a, b, c, d, e, f;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	a = n % 10, b = n / 10, c = b / 10, d = b % 10, e = c / 10, f = c % 10;

	if (n >= 1000)
	{
		_putchar(e + '0');
		_putchar(f + '0');
		_putchar(d + '0');
	}

	else if (n >= 100 && n < 1000)
	{
		_putchar(c + '0');
		_putchar(d + '0');
	}

	else if (n >= 10 && n < 100)
		_putchar(b + '0');

	_putchar(a + '0');
}

