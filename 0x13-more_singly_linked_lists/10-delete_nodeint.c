#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node from a singly linked list
 * @head: first node of the list
 * @index: node to delete
 *
 * Return: 1 or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *tmp_node = *head, *next_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = tmp_node->next;
		free(tmp_node);
		return (1);
	}

	for (; tmp_node != NULL && pos < (index - 1); pos++)
		tmp_node = tmp_node->next;

	if (tmp_node == NULL || tmp_node->next == NULL)
		return (-1);

	next_node = (tmp_node->next)->next;

	free(tmp_node->next);

	tmp_node->next = next_node;

	return (1);
}
