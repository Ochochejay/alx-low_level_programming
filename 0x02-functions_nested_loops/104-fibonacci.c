#include <stdio.h>

/**
 * main - Prints first 98 fibonacci numbers.
 * Return: 0.
*/

int main(void)
{
	unsigned long long x, y, z;
	int counter;

	y = 0;
	z = 1;
	counter = 0;

	while (counter < 98)
	{
		x = y + z;

		printf("%llu", x);

		if (counter < 97)
			printf(", ");

		y = z;
		z = x;

		counter++;
	}
	putchar('\n');

	return (0);
}
