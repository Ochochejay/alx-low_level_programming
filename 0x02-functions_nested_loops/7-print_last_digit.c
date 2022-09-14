#include "main.h"

/**
 * print_last_digit - Determines the last digit of an integer.
 * @n: Integer to test.
 * Return: last digit.
*/

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i *= -1;

	_putchar(i + '0');
	return (i);
}
