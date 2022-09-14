#include <stdio.h>

/**
 * main - Prints even sum of fibonacci numbers.
 * Return: 0 on success.
*/

int main(void)
{
	int num, x, y, z;
	long sum;


	sum = 0;
	y = 0;
	z = 1;

	while (sum <= 4000000)
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
