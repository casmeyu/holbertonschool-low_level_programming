#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of a double linked list
 *
 * @head: head of the double linked list
 * @n: value for new node
 * Return: head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	while (tmp_node && tmp_node->next)
		tmp_node = tmp_node->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (tmp_node)
	{
		new_node->prev = tmp_node;
		tmp_node->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
