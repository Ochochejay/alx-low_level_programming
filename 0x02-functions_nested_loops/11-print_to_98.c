#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: Integer to test.
 * Return: void.
*/

void print_to_98(int n)
{
	if (n < 98)
	{

		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");

			n++;
		}
	}

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
				printf(", ");

			n--;
		}
	}

	if (n == 98)
		printf("98");

	printf("\n");
}

