#include "main.h"

/**
 * _strstr - Entry point.
 * @haystack: input
 * @needle: input
 * Return: pointer or null.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h_buffer, *n_buffer;

	for (; *haystack; haystack++)
	{
		h_buffer = haystack;
		n_buffer = needle;
		while (*h_buffer == *n_buffer && *n_buffer)
		{
			h_buffer++;
			n_buffer++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
