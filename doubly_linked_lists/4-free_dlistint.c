#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: double pointer to the list.
 */

void free_dlistint(dlistint_t *head);
{
	dlistint_t *release;

	while (head)
	{
		release = head->next;
		free(head);
		head = release;
	}
}
