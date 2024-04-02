#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: place.
 */

void free_list(list_t *head)
{
	list_t *release;

	while (head)
	{
		release = head->next;
		free(head->str);
		free(head);
		head = release;
	}
}
