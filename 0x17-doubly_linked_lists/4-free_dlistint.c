#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
