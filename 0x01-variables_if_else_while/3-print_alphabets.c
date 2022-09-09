#include <stdio.h>

/**
 * main - Prints lower and upper case alphabets to stdout.
 * Return: 0 if successful.
*/

int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
