#include "main.h"

/**
 * print_last_digit - Determines the last digit of an integer.
 * @n: Integer to test.
 * Return: last digit.
*/

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n = n * -1;

	digit = n % 10;

	_putchar((n % 10) + '0');
	return (digit);
}
