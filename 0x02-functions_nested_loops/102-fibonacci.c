#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers.
 * Return: 0.
*/

int main(void)
{
	int num, x, y, z;

	y = 0;
	z = 1;

	for (x = 0; x < 50; x++)
	{
		num = y + z;

		printf("%d, ", num);

		y = num;
	}
	putchar('\n');

	return (0);
}
