#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: string
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char c[] = "AaEeOoTtLl";
	char num[] = "4433007711";

	i = j = 0;
	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if (s[i] == c[j])
				s[i] = num[j];

			j++;
		}
		j = 0;
		i++;
	}

	return (s);
}
