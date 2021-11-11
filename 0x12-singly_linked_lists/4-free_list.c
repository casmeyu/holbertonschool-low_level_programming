#include "lists.h"
/**
 * free_list - frees all elements of a linked list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		free(head->str);
		free(head);
	}
}
