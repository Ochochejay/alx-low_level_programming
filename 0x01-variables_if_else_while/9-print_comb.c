#include <stdio.h>

/**
 * main - Prints numbers with commas and spaces to stdout.
 * Return: 0 if successful.
*/

int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
