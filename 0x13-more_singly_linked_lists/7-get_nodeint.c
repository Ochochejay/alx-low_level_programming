#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t list
 * @head: Head pointer
 * @index: index of the node
 * Return: The nth node of the list OR NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cmp = 0;

	while (head)
	{
		if (cmp == index)
			return (head);
		cmp++;
		head = head->next;
	}

	return (NULL);
}
