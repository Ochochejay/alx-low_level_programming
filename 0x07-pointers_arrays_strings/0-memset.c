#include "main.h"

/**
 * _memset - function fills the memory with a constanr byte.
 * @s: Memory area.
 * @b: constant byte.
 * @n: Number of bytes.
 * Return: memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
