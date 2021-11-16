#include "lists.h"
/**
 * sum_listint - Sums the value of all nodes of a singly linked list of ints
 * @head: pointer to the singly linked list
 * Return: the sum of all values
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (!head)
		return (total);

	total += sum_listint(head->next);
	total += head->n;

	return (total);
}
