#include "lists.h"
/**
 * get_dnodeint_at_index - get node from double linked list based on index
 *
 * @head: head node of the linked list
 * @index: index to search
 * Return: adress of found node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned long int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
