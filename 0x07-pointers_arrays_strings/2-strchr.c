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

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}

	if (s[i] == c)
		return (s + i);

	return (0);
}
