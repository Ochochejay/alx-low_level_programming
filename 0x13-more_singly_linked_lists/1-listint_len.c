#include "lists.h"

/**
 * listint_len - calculates the number of elements in a list
 * @h: pointer to a list
 * Return: Number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->n)
			len++;
		h = h->next;
	}
	return (len);
}
