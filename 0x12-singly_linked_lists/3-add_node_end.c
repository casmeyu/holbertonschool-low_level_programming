#include "lists.h"
/**
 * add_node_end - adds a new node at the end of the linked list
 * @head: head of the linked list
 * @str: value of new tail->str
 * Return: the new tail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp_node;

	if (!head)
		return (NULL);

	if (!str)
		str = "\0";

	new = malloc(sizeof(*new));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!(*head))
	{
		*head = new;

		return (new);
	}

	tmp_node = *head;

	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new;

	return (new);
}
