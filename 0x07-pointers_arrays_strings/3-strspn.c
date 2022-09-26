#include "main.h"

/**
 * _strspn - gets the length of a prefix string.
 * @s: string.
 * @accept: substring.
 * Return: length.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;

	i = len = 0;

	while (s[i] && s[i] != ' ')
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				len++;

			j++;
		}
		i++;
	}
	return (len);
}
