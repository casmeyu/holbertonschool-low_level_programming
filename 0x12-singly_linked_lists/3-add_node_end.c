#include "lists.h"
/**
 * add_node - adds a new head node to a linked list
 * @head: old head to move
 * @str: value of new head->str
 * Return: the linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new;

	if (*head->next)
		add_node_end(head->next, str);
	else
	{
		new = malloc(sizeof(*new));

		if (!new)
			return (*head);

		new->str = strdup(str);
		new->len = strlen(new->str);
		new->next = NULL;

		*head->next = new
	}

	return (new);
}