#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	list_t *new, *ptr;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}
