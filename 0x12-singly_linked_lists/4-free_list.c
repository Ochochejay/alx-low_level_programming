#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head->next);
		head = head->next;
	}
		free(new);
		free(head);

}
