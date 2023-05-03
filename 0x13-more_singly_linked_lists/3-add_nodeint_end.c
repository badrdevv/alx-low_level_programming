#include "lists.h"

/**
 * add_nodeint_end - a function that add
 * a node at the end of a linked list
 * @head: the pointer to the first node in the list
 * @n: the data to insert inside the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *v;
	listint_t *t = *head;

	v = malloc(sizeof(listint_t));
	if (!v)
		return (NULL);

	v->n = n;
	v->next = NULL;

	if (*head == NULL)
	{
		*head = v;
		return (v);
	}

	while (t->next)
		t = t->next;

	t->next = v;

	return (v);
}
