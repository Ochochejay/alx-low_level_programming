#include "main.h"

/**
 * _isdigit - Checks for a digit(0 - 9).
 * @c: Digit to test.
 * Return: 1 if true otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
