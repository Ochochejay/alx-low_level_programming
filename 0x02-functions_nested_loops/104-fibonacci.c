#include <stdio.h>

/**
 * main - Prints first 98 fibonacci numbers.
 * Return: 0.
*/

int main(void)
{
	unsigned long int x, y, z;
	int counter;

	y = 0;
	z = 1;
	counter = 0;

	while (counter <= 98)
	{
		x = y + z;

		printf("%lu", x);

		if (counter < 98)
			printf(", ");

		y = z;
		z = x;

		counter++;
	}
	putchar('\n');

	return (0);
}
