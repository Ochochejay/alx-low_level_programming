#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes.
 * @s: string.
 * @accept: searching string.
 * Return: pointer to the byte in s that matches any in accept or null.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
