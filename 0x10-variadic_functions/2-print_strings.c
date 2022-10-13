#include "variadic_functions.h"

/**
 * print_strings - prints trings
 * @separator: string separator
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		printf("%s", (str) ? (str) : "(nil)");

		if (i < (n - 1) && (separator))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
