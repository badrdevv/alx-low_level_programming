#include "lists.h"

/**
 * free_listint - a function that free a linked list
 * @head: the linked listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
