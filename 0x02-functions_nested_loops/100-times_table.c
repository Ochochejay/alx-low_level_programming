#include "main.h"
/**
 * print_times_table - prints times table of any integer 0 and 15.
 * @n: Integer to print.
 * Return: void.
*/

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a, b, c;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;

				_putchar((c % 10) + '0');
				if (b < (n - 1))
				{
					_putchar(',');
					_putchar('  ');
				}
			}
			_putchar('\n');
		}
	}
}

