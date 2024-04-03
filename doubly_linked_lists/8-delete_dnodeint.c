#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at index index of a dlistint_t linked list.
 * @head: double pointer to the list
 * @index: index
 * Return: 1 if succeeded or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete = *head, *length = *head;
	unsigned int i = 0, len = 0;

	while (length != NULL)
	{
		len++;
		length = length->next;
	}

	if (*head == NULL || len < index + 1)
		return (-1);

	if (index == 0)
	{
		(*head) = delete->next;
		if (delete->next)
			delete->next->prev = NULL;
		delete->next = NULL;
		free(delete);
		return (1);
	}

	while (i < index)
	{
		delete = delete->next;
		i++;
	}

	delete->prev->next = delete->next;
	if (delete->next)
		delete->next->prev = delete->prev;
	free(delete);

	return (1);
}
