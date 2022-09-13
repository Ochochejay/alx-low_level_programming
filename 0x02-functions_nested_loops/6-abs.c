#include "main.h"

/**
 * _abs - Determines the absolute number of an integer.
 * @n: Integer to test
 * Return: the absolute value.
*/

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar('\n');
	return (n);
}
