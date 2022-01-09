#include "lists.h"
/**
 * sum_dlistint - sum of the data of every node in a double linked list
 *
 * @head: head node of the double linked list
 * Return: the sum of n of evety node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
