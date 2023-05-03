#include "lists.h"

/**
 * reverse_listint - a function that reverse a linked list
 * @head: the pointer to the first node in the linked list
 *
 * Return: a pointer to the first node in the new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = prev;
		p = *head;
		*head = n;
	}

	*head = p;

	return (*head);
}
