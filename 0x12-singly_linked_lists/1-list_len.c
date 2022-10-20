#include "lists.h"

/**
 * list_len - calculates number of elements in a
 * linked list_t list.
 *
 * @h: list_t pointer
 *
 * Return: number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str && h->len)
			size++;
		h = h->next;
	}
	return (size);
}
