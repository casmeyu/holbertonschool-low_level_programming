#include "lists.h"

/**
 * print_dlistint - prints all the elements from a doubly linked list of integers
 * 
 * @head: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	
	if (!h)
		return (length);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}

	return (length);
}
