#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - adds a new node to the beggining of a double linked list
 *
 * @head: double linekd list
 * @n: value of new node
 * Return: adress of new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = tmp_node;

	if (tmp_node)
		tmp_node->prev = new_node;

	*head = new_node;
	return (*head);
}
