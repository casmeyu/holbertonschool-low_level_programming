#include "lists.h"
/**
 * listint_len - prints the number of nodes from a singly linked list of ints
 *
 * @h: lsit to be printed
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int cont = 0;

	if (!h)
		return (cont);

	cont++;
	cont += listint_len((*h).next);

	return (cont);
}
