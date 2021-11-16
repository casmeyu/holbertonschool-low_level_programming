#include "lists.h"
/**
 * add_nodeint - adds a new head node to a singly linked list
 *
 * @head: head node from the linked list
 * @n: value for new head node
 *
 * Return: a pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);


}
