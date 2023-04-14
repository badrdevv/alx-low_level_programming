#include "main.h"
#include <stdlib.h>

/**
 * *_memoryset - a function that fill memory
 * with a constant byte
 * @a: the memory area that will be filled
 * @b: the char that will be copied
 * @c: the number of times each time we copy b
 *
 * Return: the pointer to the memory area a
 */

char *_memoryset(char *a, char b, unsigned int c)
{
	unsigned int d;

	for (d = 0; i < c; d++)
	{
		a[d] = b;
	}

	return (a);
}

/**
 * *_calloc - a function that allocate
 * memory for an array
 * @nmemb: the number of elements in one array
 * @size: the size of each element in that single array
 *
 * Return: it returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(size * nmemb);

	if (j == NULL)
		return (NULL);

	_memoryset(j, 0, nmemb * size);

	return (j);
}
