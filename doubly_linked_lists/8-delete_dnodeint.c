#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 * @head: double pointer to the list
 * @index: index
 * Return: 1 if succeeded or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *delete = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		free(head);
		return (1);
	}

	for (i = 0; delete != NULL && i < index; i++)
	{
		if (i == index - 1)
		{
			delete->prev->next = temp->next;
                        if (delete->next)
                                delete->next->prev = delete->prev;
			free(head);
			return (1);
		}
		else
			delete = delete->next;
	}
}
