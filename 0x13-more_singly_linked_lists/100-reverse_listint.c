#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: Head pointer
 * Return: pointer to the first node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = tmp;
	}

	(*head) = prev;
}
