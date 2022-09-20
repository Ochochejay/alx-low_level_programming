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
		int a, b, c, d, e, f, g;

		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				c = a * b, d = c % 10, e = c / 10, f = e / 10, g = e % 10;

				if ((b - 1) < n)
				{
					_putchar(',');
					_putchar(' ');
					if (c < 100)
						_putchar(' ');
					if (c < 10)
						_putchar(' ');
				}

				if (c > 9 && c <= 99)
					_putchar(e + '0');
				else if (c >= 100)
				{
					_putchar(f + '0');
					_putchar(g + '0');
				}
				_putchar(d + '0');
			}
			_putchar('\n');
		}
	}
}
