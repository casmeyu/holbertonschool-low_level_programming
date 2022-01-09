#include "lists.h"
/**
 * free_dlistint - frees all nodes from a double linked list of ints
 *
 * @head: head node of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
