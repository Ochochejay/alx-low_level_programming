#include "main.h"

/**
 * _isalpha - checks if integer is a letter (uppercase and lowercase).
 * @c: character to test
 * Return: 1 if true or 0 if false.
 *
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
