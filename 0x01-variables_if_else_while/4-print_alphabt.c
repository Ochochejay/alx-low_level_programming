#include <stdio.h>

/**
 * main - Prints alphabets except q and e to stdout.
 * Return: 0 on success.
*/
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);

		alpha++;
	}
	putchar('\n');

	return (0);
}
