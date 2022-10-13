#include "variadic_functions.h"

/**
 * print_numbers - prints numbers follwed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}

