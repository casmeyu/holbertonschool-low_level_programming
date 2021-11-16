#include "lists.h"
/**
 * print_listint - prints every node from a singly linked list of ints
 *
 * @h: lsit to be printed
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int cont = 0;

	if (!h)
		return (cont);

	printf("%d\n", (*h).n);
	cont++;
	cont += print_listint((*h).next);

	return (cont);
}
