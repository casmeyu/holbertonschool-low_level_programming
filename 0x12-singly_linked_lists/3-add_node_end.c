#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the linked list
 * @head: head of the linked list
 * @str: value of new tail->str
 * Return: the new tail
 */
list_t *add_node_end(list_t **head, __attribute__((unused)) const char *str)
{
	list_t *new;

	if (!(*head))
	{
		if (!str)
			return (NULL);
		new = malloc(sizeof(*new));

		if (!new)
			return (NULL);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		*head = new;

		return (*head);
	}
	else
	{
		add_node_end((&(*head)->next), str);
	}

	return (NULL);
}
