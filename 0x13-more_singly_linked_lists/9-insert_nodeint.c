#include "lists.h"

/**
 * insert_nodeint_at_index - a function that insert a new
 * node in a linked list,
 * at a given position
 * @head: a pointer to the first node in the linked list
 * @idx: the index where the new node will be added
 * @n: the data to insert inside the new node
 *
 * Return: the pointer to the new node, Otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *b;
	listint_t *t = *head;

	b = malloc(sizeof(listint_t));
	if (!b || !head)
		return (NULL);

	b->n = n;
	b->next = NULL;

	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (b);
	}

	for (a = 0; t && a < idx; a++)
	{
		if (a == idx - 1)
		{
			b->next = t->next;
			t->next = b;
			return (b);
		}
		else
			t = t->next;
	}

	return (NULL);
}
