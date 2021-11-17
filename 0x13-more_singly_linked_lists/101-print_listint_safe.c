#include "lists.h"
/**
 * print_listint_safe - prints a singly linked list and exit if fail
 *
 * @head: pointer to the head node
 * Return: number of elements in list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int cont = 0;

	if (!head)
		exit(98);

	printf("%d\n", (*head).n);
	cont++;
	if ((*head).next)
		cont += print_listint_safe((*head).next);

	return (cont);
}
