#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to head
 * @idx: index where a new node should be added
 * @n: Data to be added
 * Return: Address of a new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cmp = 0;
	listint_t *new, *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp)
	{
		if (cmp == (idx - 1))
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		cmp++;
		tmp = tmp->next;
	}

	return (NULL);
}
