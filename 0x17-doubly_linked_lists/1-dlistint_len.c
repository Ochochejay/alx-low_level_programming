#include "lists.h"

/**
 * dlistint_len - gets the number of elemnts in a list
 * @h: Head pointer
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
