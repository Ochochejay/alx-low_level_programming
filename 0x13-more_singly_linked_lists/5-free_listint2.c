#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * sets the head to NULL
 *@head: pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL || head == NULL)
		return;

	tmp = *head;
	while (tmp)
	{
		*head = tmp->next;
		free(tmp);
		tmp = *head;
	}
	tmp = NULL;
	head = NULL;
}
