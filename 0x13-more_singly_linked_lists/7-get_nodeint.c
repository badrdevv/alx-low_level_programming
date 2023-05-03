#include "lists.h"

/**
 * get_nodeint_at_index - a function that return the node at
 * a certain index in a linked list
 * @head: the first node in the linked list
 * @index: the index of the node that will be returnd
 *
 * Return: the pointer to the node we are searching for, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *t = head;

	while (t && a < index)
	{
		t = t->next;
		a++;
	}

	return (t ? t : NULL);
}
