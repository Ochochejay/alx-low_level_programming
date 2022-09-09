#include <stdio.h>

/**
 * main - Reverse and print alphabets to stdout.
 * Return: 0 on success.
*/

int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');

	return (0);
}
