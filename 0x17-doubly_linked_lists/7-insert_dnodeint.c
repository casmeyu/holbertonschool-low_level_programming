#include "lists.h"
/**
 * insert_dnodeint - insert node in double linked list at given index
 *
 * @h: pointer to the head node
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node = NULL, *tmp_node = *h;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (tmp_node)
	{
		if (count == idx)
		{
			new_node->next = tmp_node->next;
			new_node->prev = tmp_node->prev;

			tmp_node->next->prev = new_node;
			tmp_node->next = new_node;

			return (new_node);
		}
		tmp_node = tmp_node->next;
		count++;
	}

	return (NULL);


}
