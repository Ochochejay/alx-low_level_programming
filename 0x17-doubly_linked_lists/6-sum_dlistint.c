#include "lists.h"

/**
 * sum_dlistint - sums up all the data(n) in a list
 * @head: head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
