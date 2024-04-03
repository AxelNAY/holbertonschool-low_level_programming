#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list
 * @index: index
 * Return: address of the node, or if it does not exist, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
