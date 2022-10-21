#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the list
 */

void free_list(list_t *head)
{
	if (head)
	{
		while (head)
		{
			if (head->str)
				free(head->str);
			if (head->next)
				free(head->next);
			head = head->next;
		}
		free(head);
	}


}
