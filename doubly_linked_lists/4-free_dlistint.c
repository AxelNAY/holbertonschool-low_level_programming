#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: place.
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
