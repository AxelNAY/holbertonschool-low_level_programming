#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: place.
 * @str: name of the new node.
 * Return: size.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, len = 0;
	list_t *new;

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
	new->next = *head;
	*head = new;

	return (new);
}
