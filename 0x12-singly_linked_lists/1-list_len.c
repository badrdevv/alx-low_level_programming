#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list-len - a function that return the number of elements in
 * a linked list_t list
 * @h: a pointer to the head of the linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *t = h;

	while (t != NULL)
	{
		count++;
		t = t->next;
	}

	return (count);
}
