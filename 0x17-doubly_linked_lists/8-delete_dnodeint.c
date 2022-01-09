#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node from a double linked list of ints
 *
 * @head: pointer to the head node
 * @index: index from node to delete
 * Return: 1 on succes or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = *head;

	if (!(*head))
		return (-1);

	while (tmp)
	{
		if (count == index)
		{
			if (count == 0)
				*head = tmp->next;

			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;

			free(tmp);
			return (1);
		}

		tmp = tmp->next;
		count++;
	}

	return (-1);
}
