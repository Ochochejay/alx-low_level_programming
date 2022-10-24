#include "lists.h"

/**
 * free_listint - frees a listint list
 *@head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
}
