#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node in a given position
 * @head: head of the singly linked list
 * @idx: index of new node
 * @n: value for new node
 *
 * Return: a pointer to the singly linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *new_node, *tmp_node;

	if (!(*head))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	tmp_node = (*head);

	if (!new_node)
		return (NULL);

	while (pos < idx - 1 && tmp_node)
	{
		pos++;
		tmp_node = tmp_node->next;
	}

	if (tmp_node)
	{
		new_node->n = n;
		new_node->next = tmp_node->next;
		tmp_node->next = new_node;
	}

	return (*head);

}
