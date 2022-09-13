#include <stdio.h>

/**
 * main - Prints lower case alphabetw to stdout.
 * Return: 0.
 *
 * print_alphabet - computes lower case alphabet.
*/
	void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}

void print_alphabet(void)
{
	char aplha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
	}
}
