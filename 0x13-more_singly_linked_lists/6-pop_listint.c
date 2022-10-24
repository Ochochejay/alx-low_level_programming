#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t
 * linked list
 *
 * @head: pointer to the head pointer
 *
 * Return: Head node's data(n) OR 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int num;

	if (tmp)
	{
		*head = tmp->next;
		num = tmp->n;
		free(tmp);
		return (num);
	}

	return (0);
}
