#include "lists.h"

/**
 * print_dlistint - prints all the lements of a dlistint_t list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
