#include "lists.h"

/**
 * add_nodeint - a function that add a new node at the beginning
 * of a linked list
 * @head: a pointer to the first node in the list
 * @n: the data to insert in new node
 *
 * Return: the pointer to the new node, otherwise NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *v;

	v = malloc(sizeof(listint_t));
	if (!v)
		return (NULL);

	v->n = n;
	v->next = *head;
	*head = v;

	return (v);
}
