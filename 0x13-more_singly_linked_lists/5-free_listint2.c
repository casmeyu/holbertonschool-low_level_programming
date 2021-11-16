#include "lists.h"
/**
 * free_listint2 - frees a singly linked list of ints and head NULL
 * @head: head node of the linekd list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;
	
	while(*head)
	{
		tmp_node = *head;
		(*head) = (*head)->next;
		free(tmp_node);
	}
	head = NULL;
}
