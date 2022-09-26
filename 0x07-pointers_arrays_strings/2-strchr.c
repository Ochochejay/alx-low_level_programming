#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: first occurrence of the character or null.
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		if (str[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
