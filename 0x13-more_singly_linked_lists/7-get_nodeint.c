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
	unsigned int pos = 0;

	while (pos < index && head)
	{
		pos++;
		head = head->next;
	}

	if (head)
		return (head);
	else
		return (NULL);
}
