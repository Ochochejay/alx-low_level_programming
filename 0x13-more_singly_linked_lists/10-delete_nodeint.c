#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: Pointer to the Head
 * @index: index to delete
 * Return: 1 on success or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int cmp = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp)
	{
		if (cmp == (index - 1))
		{
			del = tmp->next;
			tmp->next = del->next;
			free(del);
			return (1);
		}
		cmp++;
		tmp = tmp->next;
	}
	return (-1);
}
