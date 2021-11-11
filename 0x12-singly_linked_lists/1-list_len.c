#include "lists.h"
/**
 * list_len - returns the number of elements in a singly linked list
 * @h: header of the linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	if (!h)
		return (elements);

	elements++;

	if (h->next)
		elements += list_len(h->next);

	return (elements);
}
