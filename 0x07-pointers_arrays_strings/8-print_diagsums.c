#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a
 * square matrix of integers.
 * @a: square matrix.
 * @size: size of matrix.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	j = size + 1;
	sum1 = sum2 = 0;

	for (i = 0; i < (size * size); i += j)
		sum1 += *(a + i);

	j = size - 1;
	for (i = j; i < (size * size - 2); i += j)
		sum2 += *(a + i);

	printf("%d, %d\n", sum1, sum2);
}
