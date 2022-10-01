#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: string to test.
 * Return: String length.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != 0)
	{
		length++;
		s++;
	}

	return (length);
}
