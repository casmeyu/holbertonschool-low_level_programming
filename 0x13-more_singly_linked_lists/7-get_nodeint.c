#include "lists.h"
/**
 * get_nodeint_at_index - returns a pointer to the desired index
 * @head: pointer to the singly linked list
 * @index: node to search for based on index
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node;
	unsigned int pos = 0;

	if (!head)
		return (NULL);

	tmp_node = head;

	while (pos <= index && tmp_node->next)
	{
		tmp_node = tmp_node->next;
		pos++;
		if (pos == index)
			return (tmp_node);
	}

	return (NULL);
}
