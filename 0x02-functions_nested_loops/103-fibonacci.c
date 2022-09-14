#include <stdio.h>

/**
 * main - Prints even sum of fibonacci numbers.
 * Return: 0.
*/

int main(void)
{
	int num, x, y, z;
	long sum;


	sum = 0;
	y = 0;
	z = 1;

	for (x = 0; x <= 4000000; x++)
	{
		num = y + z;

		if (num % 2 == 0)
			sum += num;

		y = z;
		z = num;
	}

	printf("%ld\n", sum);

	return (0);
}
