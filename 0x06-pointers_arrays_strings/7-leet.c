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
	char small[] = "aeotl";
	char big[] = "AEOTL";
	char num[] = "43071";

	i = j = 0;
	while (s[i] != '\0')
	{
		while (j < 5)
		{
			if (s[i] == small[j] || s[i] == big[j])
				s[i] = num[j];

			j++;
		}
		j = 0;
		i++;
	}

	return (s);
}
