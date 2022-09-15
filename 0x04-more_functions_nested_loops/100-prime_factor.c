#include <stdio.h>

/**
 * main - Prints highest prime number.
 * Return: 0.
 */

int main(void)
{
	long x, y;

	y = 612852475143;

	for (x = 2; y > x; x++)
	{
		while (y % x == 0)
		{
			y = y / x;
		}
	}
	printf("%ld\n", x);

	return (0);
}
