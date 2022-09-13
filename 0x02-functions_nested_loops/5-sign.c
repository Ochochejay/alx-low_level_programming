#include "main.h"

/**
 * print_sign - checks if integer is greater,less or equals zero.
 * @n: Integer to test.
 * Return: 0,1 or -1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	
	else
	{
		return ('/');
	}
	_putchar('\n');
}
