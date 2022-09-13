#include <stdio.h>

/**
 * main - Print Hexadecimal to stdout.
 * Return: 0 on success.
*/

int main(void)
{
	int num;
	char alpha;

	num = 0;
	alpha = 'a';

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}

	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
