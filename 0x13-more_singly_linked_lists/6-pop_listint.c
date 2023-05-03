#include "lists.h"

/**
 * pop_listint - a function that delete the head
 * node of a linked list
 * @head: the pointer to the first node in the linked list
 *
 * Return: the data inside the elements that will be deleted,
 * otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int a;

	if (head == NULL || *head == NULL)
		return (0);

	a = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (a);
}
