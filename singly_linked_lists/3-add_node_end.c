#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: place.
 * @str: name of the new node.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, len = 0;
	list_t *new, *update = *new;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (update->next != NULL)
		update = update->next;
	update->next = new;

	return (new);
}
