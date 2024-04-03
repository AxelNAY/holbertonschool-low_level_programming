#include "lists.h"

/**
 * sum_dlistint - do the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to the list
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (*head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
