#include "variadic_functions.h"

/**
 * sum_them_all - sums all rhe parameters passed to it
 * @n: number of parameters
 * Return: sum or 0 on failure
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int i, sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg[i], int);

	va_end(arr);

	return (sum);
}
