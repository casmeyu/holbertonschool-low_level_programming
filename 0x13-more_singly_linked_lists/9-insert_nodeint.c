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

	tmp_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
		return (*head);
	}

	while (pos < idx - 1 && tmp_node)
	{
		tmp_node = tmp_node->next;
		pos++;
		if (!tmp_node)
			return (NULL);
	}

	if (pos >= idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp_node->next;
	tmp_node->next = new_node;

	return (new_node);
}
