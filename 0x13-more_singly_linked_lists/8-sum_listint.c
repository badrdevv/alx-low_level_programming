#include "lists.h"

/**
 * sum_listint - a function that calculate the sum
 * of all the data in a linked listint_t list
 * @head: the first node in the linked list
 *
 * Return: the result s
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}

	return (s);
}
