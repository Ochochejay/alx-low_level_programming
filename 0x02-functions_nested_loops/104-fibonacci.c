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

	while (counter < 96)
	{
		x = y + z;

		printf("%lu", x);

		if (counter < 95)
			printf(", ");

		y = z;
		z = x;

		counter++;
	}
	putchar('\n');

	return (0);
}
