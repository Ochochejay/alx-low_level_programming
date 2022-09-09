#include <stdio.h>

/**
 * main - Prints alphabets in lower case to stdout.
 * Return: 0 if successful.
*/

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
