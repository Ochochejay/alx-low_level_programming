#include "lists.h"

/**
 * sum_listint - sums up all the data(n) of a listint_t list
 * @head: pointer to the list
 * Return: sum OR 0 on failure
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	if (sum)
		return (sum);

	return (0);
}
