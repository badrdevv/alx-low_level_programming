#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete a node
 * in a linked list at a index
 * @head: the pointer to the first node in the linked list
 * @index: the index of the node to delete
 *
 * Return: 1 (Success), otherwise -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *c = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (i < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		a++;
	}


	c = t->next;
	t->next = c->next;
	free(c);

	return (1);
}
