#include "lists.h"
/**
 * add_node - adds a new head node to a linked list
 * @head: old head to move
 * @str: value of new head->str
 * Return: the linked list
 */
list_t *add_node(list_t **head, __attribute__((unused)) const char *str)
{

	if (head)
	{
		while ((*head)->next)
			*head = (*head)->next;
	}

	return (*head);
}
