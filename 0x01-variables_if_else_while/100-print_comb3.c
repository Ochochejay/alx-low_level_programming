#include <stdio.h>

/**
 * main - prints combination of numbers to stdout.
 * Return: 0
*/

int main(void)
{
	int x;
	int i;

	for (x = 0; x < 9; x++)
	{

		for (i = (x + 1); i < 10; i++)
		{
			putchar((x % 10) + '0');
			putchar((i % 10) + '0');

			if (!(x == 8 && i == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
			putchar('\n');

	return (0);
}
