#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: head
 * @index: nth index
 * Return: nth node of a list or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		idx++, head = head->next;
	}
	return (NULL);
}
