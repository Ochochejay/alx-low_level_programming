#include "main.h"

/**
 * factorial - returns the factorial of the given number.
 * @n: number.
 * Return: -1 if n < 0 , 1 n == 0 or factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
