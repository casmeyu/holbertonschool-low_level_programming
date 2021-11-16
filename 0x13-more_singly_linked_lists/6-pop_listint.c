#include "lists.h"
/**
 * pop_listint - deletes the first element of a singly linked list of ints
 * @head: first node of the linked list
 * Return: the value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int n;

	if (!(*head))
		return (0);

	tmp_node = (*head);

	n = tmp_node->n;

	(*head) = tmp_node->next;

	free(tmp_node);

	return (n);
}
