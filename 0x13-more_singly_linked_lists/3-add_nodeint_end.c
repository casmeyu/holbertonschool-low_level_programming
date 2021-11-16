#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a signly linked list
 *
 * @head: head node of the list
 * @n: value for new node
 *
 * Return: A pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;

		return (new_node);
	}

	tmp_node = *head;

	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new_node;

	return (*head);
}
