#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list
 *
 * @head: pointer to a node
 * @str: string
 *
 * Return: Address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (*head);
}
