#include "main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: First pointer.
 * @b: First pointer.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = a;
	*a = b;
	*b = c;
}
