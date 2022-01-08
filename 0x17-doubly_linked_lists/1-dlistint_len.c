#include "lists.h"
/**
 * dlistint_len - returns the lenght of a double linked list
 *
 * @h: head of the double linked list
 * Return: length of double linked list (unsigned long int)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
		return (len);

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
