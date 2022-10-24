#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Head pointer
 * @n: Element to add
 * Return: Address of the new element
 * or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
