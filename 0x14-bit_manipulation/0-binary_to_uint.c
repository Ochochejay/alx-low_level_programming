#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if an error occurs
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, ans, i;

	ans = i = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	len--;

	while (b[i])
	{
		ans += b[i] - 48 << len;
		len--, i++;
	}

	return (ans);
}
