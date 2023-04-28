#include "lists.h"
#include <stdio.h>
#include <stdlib.h>



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
