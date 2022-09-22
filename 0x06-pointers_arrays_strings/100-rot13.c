#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: string.
 * Return: encoded string.
 */

char *rot13(char *s)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = j = 0;

	while (s[i] != 0)
	{
		while (j < 52)
		{
			if (s[i] == str1[j])
			{
				s[i] = str2[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}

	return (s);
}
