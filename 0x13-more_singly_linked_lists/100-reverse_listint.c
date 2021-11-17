#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 * @head: pointer to the linked list
 *
 * Return: number of nodes in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	unsigned int len = 0;
	listint_t *prev = NULL, *current = NULL, *next = NULL;

	if (head == NULL)
		exit(98);

	current = (*head);

	while (current)
	{
		next = current->next;

		current->next = prev;

		prev = current;

		current = next;

		len++;
	}

	(*head) = prev;

	return (*head);
}
