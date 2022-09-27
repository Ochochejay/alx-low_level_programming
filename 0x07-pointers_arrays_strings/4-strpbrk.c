#include "main.h"

/**
 * _strbrk - searches a string for a set of bytes.
 * @s: string.
 * @accept: searching string.
 * Return: pointer to the byte in s that matches any in accept or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while(accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j])
			return (s + i);
		i++;
	}
	return ('\0');
}
