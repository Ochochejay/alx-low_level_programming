#include "lists.h"

/**
 * add_node - Adds a new node to the beginning
 * of a list_t list.
 *
 * @head: pointer to the head
 * @str: string
 *
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	*head = new;
	
	return *head;
}
