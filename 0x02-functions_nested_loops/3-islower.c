#include "main.h"

/**
 * _islower - checks whether an char is a lower or upper case letter.
 * @c - integer to test.
 * Return: 1 for lowercase or 0 for uppercase.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
