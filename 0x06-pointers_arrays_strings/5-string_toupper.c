#include "main.h"

/**
 * string_toupper - changes lower case letters of a string to uppercase.
 * @str: string to change.
 * Return: uppercase string.
 */

char *string_toupper(char *str)
{
	char upper, lower;
	int i;

	i = 0;
	upper = 'A', lower = 'a';

	while (str[i] != '\0')
	{
		while (str[i] >= 'a' &&  str[i] <= 'z')
		{
			if (str[i] == lower)
				str[i] = upper;

			upper++;
			lower++;
		}
		upper = 'A', lower = 'a';
		i++;
	}

	return (str);
}
