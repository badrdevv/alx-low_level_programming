#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: the head that points to the first node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *t = NULL;

	t = h;

	while (t != NULL)
	{
		if (t->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", t->len, t->str);
		count++;
		t = t->next;
	}

	return (count);
}
