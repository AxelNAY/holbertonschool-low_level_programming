#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the list
 * @idx: index
 * @n: integer
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *insert = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	for (i = 0; insert != NULL && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (insert->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = insert->next;
			new->prev = insert;
			insert->next->prev = new;
			insert->next = new;
			return (new);
		}
		else
			insert = insert->next;
	}

	return (NULL);
}
