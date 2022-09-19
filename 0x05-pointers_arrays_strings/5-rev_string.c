#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: string to reverse.
 * Return: void.
 */

void rev_string(char *s)
{
	int a, b;
	char str[100];

	a = 0;
	while (*(s + a))
	{
		str[a] = *(s + a);
		a++;
	}

	a--;
	b = 0;
	while (a >= 0)
	{
		*(s + b) = str[a];
		b++;
		a--;
	}
}
