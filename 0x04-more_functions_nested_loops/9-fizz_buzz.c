#include <stdio.h>

/**
 * main - Prints Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of 3&5 or natural numbers to 100.
 * Return: 0.
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{

		if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");

		else if (n % 3 == 0)
			printf("Fizz");

		else if (n % 5 == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n < 100)
			putchar(' ');

	}
		putchar('\n');

		return (0);
}
