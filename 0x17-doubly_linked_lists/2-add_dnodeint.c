#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to head
 * @n: integer to add
 * Return: Address of a new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!*head)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
